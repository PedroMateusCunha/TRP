import sys #importar a biblioteca de sistema de argumento
from scapy.all import * #importar todas as bibliotecas do scapy
conf.verb = False #desabilita as informações desnecessarias
araca = {'192.168.200.91':'AP_STORM_ARACA_VERTENTE','192.168.200.72':'STORM_ARACA_VERTENTE','192.168.200.33':'STORM_CENTRO','192.168.200.93':'STORM_ARACA_2.4'}
lagoadacruz = {'192.168.200.176':'WOG_STORM_LAGOA_DA_CRUZ','192.168.200.73':'STORM_PONTE_LAGOA_DA_CRUZ','192.168.200.68':'STORM_ALEGRE'}
pedomorro = {'192.168.200.74':'POWER_BEAM_RECEBE_PE_DO_MORRO_vertente','192.168.200.213':'AP_MK-RB_METAL_2.4','192.168.200.79':'NETWORK_T','192.168.200.92':'STORM_nano2.4','192.168.200.94':'STORM_PE_DO_MORRO_BAUNEARIO'}
vertente = {'192.168.200.24':'STORM_VERTENTE_2.4','192.168.200.31':'AP_VAI_PE_DO_MORRO','192.168.200.44':'STORM_PROVEDOR_ARACA','192.168.200.39':'AP_OMINTIK_5.8_VERTENTE','192.168.200.20':'STORM_ALGCOM-VERTENTE_AP','192.168.200.110':'STORM','192.168.200.211':'STORM_LG_DENTRO','192.168.200.113':'STORM_PONTE_ARACA_VERTENTE'}
if len(sys.argv) != 2: #Bloco de repiteção para dar o exemplo
    print("Use: {} <interior>\n".format(sys.argv[0]))#Exemplo
    print("Escreva tudo minusculo e sem espaco")
    sys.exit(1)

def check(interior):#funcao de checker
	for ip in interior:#para cada ip dentro de interior
		print("Esperando resposta de {}".format(ip))
		try:
		    pkt=IP(dst=ip)/ICMP() #executa a funcao ip(dentro de scapy)/ destination = ip
		    er=sr1(pkt,retry=4,timeout=4) #echo reply = sr1== enviador de pacotes e recebe a primeira resposta
		except PermissionError:#sudo su
			print("[*] Use root.\n")
			sys.exit(1)
		except Exception as erro: #erros a parte do sudo
			print("[*] {}".format(erro))
			sys.exit(1)
		if er: #Se tiver resposta
			print(ip,"- ONLINE")
		else:#se tiver vazia 
			print(ip,"- OFFLINE")
def main(interior_passado):#funcao principal
    if interior_passado == 'araca':
        check(araca)
    elif interior_passado == 'lagoadacruz':
        check(lagoadacruz)
    elif interior_passado == 'pedomorro':
    	check(pedomorro)
    elif interior_passado == 'vertente':
    	check(vertente)
    else:#Tratamento de erros
        print("[!] INTERIOR INVALIDO.\n")
        sys.exit(1)

if __name__ == '__main__': #Poder ser importada e executada
    main(sys.argv[1]) #Chama main e passa o argumento 1
