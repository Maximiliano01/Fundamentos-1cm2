#include <stdio.h>
#include <stdlib.h>

//FUNCIONES NECESARIAS PARA CALCULAR: AGUINALDO

int dias_trans(int dia, int mes){
	int sum;
	int dias_mes [] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	
	dias_mes[mes] = dia;
	
	sum=0;
	for (int i=0;i<=mes;i++){
		dias_mes[i];
		sum = dias_mes[i]+sum;
		
	}
	return sum;
}

float f_aguinaldo(float diastrans, float b){
	return ( ((diastrans*15)/365) * b  );
	
}

//FUNCIONES NECESARIAS PARA CALCULAR: DIAS DE VACACIONES
int factor_dias(int a){
	
if(a==1){	
	return 6;
}
if(a==2){
	return 8;
}
if(a==3){
	return 10;
}
if(a==4){
	return 12;
}
if(a>= 5 && a<9){
	return 14;
}
if(a>=10){
	return 16;
}

	
}

float f_vacaciones (float diastrans, float factordias, float salariodiario){
	
	return ( ((diastrans*factordias)/365) * salariodiario  );
		
}

//FUNCIONES NECESARIAS PARA CALCULAR: PRIMA VACACIONAL

float f_pvacacional(float vacaciones){
	
	return (vacaciones*0.25);
	
}

//FUNCIONES NECESARIAS PARA CALCULAR: DIAS LABORADOS DE ULTIMA QUINCENA

float f_diasquincena (float diaDespido, float sueldoDiario){
	float factor;
	
	
	if(diaDespido <= 15){
		
		factor = diaDespido;
	}
	if(diaDespido > 15 && diaDespido <=30){
		
		factor = (diaDespido - 15);
	}
	
	return (factor * sueldoDiario);
	
}

//FUNCION NECESARIA PARA CALCULAR: INDEMNIZACION

float f_indemnizacion(float sueldo,int opcion){
	;
	
	switch(opcion){
		case 1: return ((sueldo*4)*3);
		break;
		
		case 2: return ((sueldo*2)*3);
		break;
		
		case 3: return (sueldo * 3);
		break;
	}
	
}

//FUNCION NECESARIA PARA CALCULAR: PRIMA DE ANTIGUEDAD

float f_antiguedad (float edadEmpresa){
	
	return (edadEmpresa * 12 * 168.98); //168.98 Es una costante que se toma para calcular la prima de antiguedad que son 2 UMAS
	
}

//FUNCION QUE SUMA TODAS LAS PRESTACIONES CALCULDAS

float total (float a, float b, float c, float d, float e){
	
	return (a + b + c + d + e);
	
}



//FUNCION PRINCIPAL
int main (){
	
	 string nombre;
	 int opcion,opcion1, opcion3, edad_empresa, temp, temp1, dia_despido, mes_despido;
	 float sueldo, sueldo_diario;
	 float diasTrans, aguinaldo, factorDias, vacaciones, p_vacacional, diasQuincena, indemnizacion, p_antiguedad;
	cout<<"\t\t\t\t   CALCULADORA DE PRESTACIONES"<<endl;
	cout <<"\t ////////////////////////////////////////////////////////////////////////////////////////////"<<endl;
	cout<<"\t ESTE PROGRAMA CALCULA LAS PRESTACIONES A LAS QUE TIENE DERECHO UN TRABAJADOR AL SER DESPEDIDO"<<endl;
	cout<<"\t /////////////////////////////////////////////////////////////////////////////////////////////"<<endl;
	
//CAPTURA DE DATOS DEL TRABAJADOR

//NOMBRE
do{
	cout<<"\n---DATOS DEL TRABAJADOR---"<<endl;
	cout<<"Nombre: "; getline(cin,nombre);
	
//SUELDO Y CALCULO DE SUELDO DIARIO	
	do{
	cout<<"Seleccione de que manera percibe el sueldo el trabajador, segun la opcion que corresponda: "<<endl;
	cout<<"1. SEMANAL "<<endl<<"2. QUINCENAL "<<endl<<"3. MENSUAL "<<endl; 
	cin>>opcion;
		switch(opcion){
			
			case 1: cout<<"Capture el sueldo semanal del trabajador: ";
					cin>>sueldo;
					sueldo_diario = sueldo/7;
					break;
			
			case 2: cout<<"Capture el sueldo quincenal del trabajador: ";
					cin>>sueldo;
					sueldo_diario = sueldo/15;
					break;
			
			case 3: cout<<"Capture el sueldo mensual del trabajador: ";
					cin>>sueldo;
					sueldo_diario = sueldo/30;
					break;
			default:cout<<"Opcion Invalida. Intenta de nuevo."<<endl;
		}
	
	}
	while (opcion > 3);
	
//AÑOS QUE TIENE LABORANDO EN LA EMPRESA
	cout<<"Años laborando en la empresa: "; cin>>edad_empresa;
		
	
//DÍA Y MES EN QUE FUE DESPEDIDO EL TRABAJADOR
	cout<<"Capture el dia y el mes en que fue despedido el trabajador (dd/mm), separando dia y mes por un enter: "<<endl;
	cin>> dia_despido>> mes_despido;
	
	while (dia_despido > 31 || mes_despido > 12){
		cout<<"Datos incorrectos, vuelve a ingresar el dia y mes separados por un enter: "<<endl;
		cin>>dia_despido>>mes_despido;
	}
	
	

//COMPROBAR QUE LOS DATOS CAPTURADOS SON LOS CORRECTOS
	cout<<"\nNombre: "<<nombre<<endl;
	
	if(opcion == 1){
		cout<<"Sueldo semanal: "<< sueldo<<endl;
	}
	if(opcion == 2){
		cout<<"Sueldo quincenal: "<<sueldo<<endl;
	}
	if(opcion == 3){
		cout<<"Sueldo mensual: "<<sueldo<<endl;
	}
	
	cout<<"Sueldo diario: "<<sueldo_diario<<endl;
	
	cout<<"Años laborando en empresa: "<<edad_empresa<<endl;
	
	cout<<"Fecha de despido: "<<dia_despido<<" / "<<mes_despido<<endl;
	
	cout<<"\nLos datos son correctos? Use el menu de opciones: "<<endl;
	cout<<"1. SI SON CORRECTOS "<< "2. NO, QUIERO VOLVER A CAPTURARLOS "<<endl;
	cin>>opcion1;
	switch(opcion1){
		case 1: break;
		
		case 2: cout<<"\nVUELVE A INTRODUCIR LOS DATOS: "<<endl;
	}
}
while(opcion1 == 2);

do{

	cout<<"\nSeleccione de que tipo fue el despido del trabajador. Use el menu de opciones: "<<endl;
	cout<<"1. JUSTIFICADO "<<endl<<"2. INJUSTIFICADO "<<endl;
	cin>>opcion3;
	
	datos(nombre,sueldo,sueldo_diario,edad_empresa,dia_despido,mes_despido);
	
	
		switch(opcion3){
			
			case 1:
				{
				
					 cout<<"\nLAS PRESTACIONES DEL TRABAJADOR SON LAS SIGUIENTES: ";
			
					diasTrans = dias_trans(dia_despido,mes_despido);
					aguinaldo = f_aguinaldo (diasTrans, sueldo_diario);
					cout<<"AGUINALDO: "<<aguinaldo<<endl;
			
					factorDias = factor_dias(edad_empresa);
					vacaciones = f_vacaciones(diasTrans, factorDias, sueldo_diario);
					cout<<"PAGO DE DIAS DE VACACIONES: "<<vacaciones<<endl;
			
					p_vacacional = f_pvacacional(vacaciones);
					cout<<"PRIMA VACACIONAL: "<<p_vacacional<<endl;
			
					diasQuincena = f_diasquincena(dia_despido, sueldo_diario);
					cout<<"PAGO DE DIAS LABORADOS DE ULTIMA QUINCENA: "<<diasQuincena<<endl;
					
					cout<<"EL MONTO TOTAL DE LAS PRESTACIONES ES: "<< total(aguinaldo, vacaciones, p_vacacional, diasQuincena, 0);
					
					break;
			}
			case 2: cout<<"\nLAS PRESTACIONES DEL TRABAJADOR SON LAS SIGUIENTES: "<<endl;
			
					diasTrans = dias_trans(dia_despido,mes_despido);
					aguinaldo = f_aguinaldo (diasTrans, sueldo_diario);
					cout<<"AGUINALDO: "<<aguinaldo<<endl;
			
					factorDias = factor_dias(edad_empresa);
					vacaciones = f_vacaciones(diasTrans, factorDias, sueldo_diario);
					cout<<"PAGO DE DIAS DE VACACIONES: "<<vacaciones<<endl;
			
					p_vacacional = f_pvacacional(vacaciones);
					cout<<"PRIMA VACACIONAL: "<<p_vacacional<<endl;
			
					indemnizacion = f_indemnizacion(sueldo,opcion);
					cout<<"INDEMNIZACION: "<<indemnizacion<<endl;
					
					p_antiguedad = f_antiguedad(edad_empresa);
					cout<<"PRIMA DE ANTIGUEDAD: "<<p_antiguedad<<endl;
					
					cout<<"EL MONTO TOTAL DE LAS PRESTACIONES ES: "<< total(aguinaldo, vacaciones, p_vacacional,indemnizacion,  p_antiguedad)<<endl;
					break;
					
			default: cout<<"\nOpcion invalida. Intenta de nuevo"<<endl;;
		}
	
}
while (opcion3 > 2);

cout<<"Gracias por usar este programa!"

	return 0;
}