# *Projeto 2 - Programação de computadores 1*

__*Curso:*__ *ABI - Ciência da computação*

__*Aluno:*__ *João Pedro Amaral Bonfim*

__*Matrícula:*__ *211057600027*

__*Turma:*__ *A*

## *Sobre o projeto*
*Este projeto tem o objetivo de acessar dois arquivos dados junto do executável, um contendo o nome e a senha criptografada de um usuário e outro contendo uma senha e um hash. O programa irá comparar a senha dada no primeiro arquivo e compara-la com os hash do segundo arquivo utilizando busca binária.*
>*__Será utilizada alocação dinâmica, registros, arquivos texto e ponteiros.__*

## *Execução do programa*
*Dentro da pasta zipada `Projeto2_PC1` contém um __Makefile__, para que tudo seja compilado deve-se digitar:*

`make main`

*Agora basta digitar o executável e os 3 arquivos necessários para rodar o programa:*

`./main exemplo1.txt exemplo2.txt exemplo3.txt`

*Depois de executar, será analisado e as senhas que forem quebradas serão impressas no arquivo de relatório de quebra `exemplo3.txt`.*

### *Exemplo*
*Um exemplo de como deve funcionar:*
>*Arquivo criptografado:*
```
robertofontes 8d969eef6ecad3c29a3a629280e686cf0c3f5d5a86aff3ca12020c923adc6c92
danielsaad ff7e0624efbfe4c006a29afcd7dd6f189535f5191259c321a31d5472f175f370
joaoaraujo d58d736c7a967fb5f307951932734f8b0594725faa5011dbb66a8c538e635fb6
```
>*Arquivo pré-computado:*
```
jordan 136c67657614311f32238751044a0a3c0294f2a521e573afa8e496992d3786ba
qwerty 65e84be33532fb784c48129675f9eff3a682b27168c0ea744b2cf58ee02337c5
chocolate 7499aced43869b27f505701e4edc737f0cc346add1240d4ba86fbfa251e0fc35
123456 8d969eef6ecad3c29a3a629280e686cf0c3f5d5a86aff3ca12020c923adc6c92
swordfish b9f195c5cc7ef6afadbfbc42892ad47d3b24c6bc94bb510c4564a90a14e8b799
cocacola c46d87f1fb4a5df6df841030ffe300e8271af74b62f2545c6c1759d18932675d
flamengo d58d736c7a967fb5f307951932734f8b0594725faa5011dbb66a8c538e635fb6
```
>*Arquivo do relatório de quebra:*
````
robertofontes 123456
joaoaraujo flamengo
````
*__Observação__: Como não foi possível quebrar a senha do usuário danielsaad, ela não aparece no relatório de quebra.*
