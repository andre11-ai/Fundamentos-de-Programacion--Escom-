
	Algoritmo nombre
		Escribir 'Bienvenido al OTSO'
		Escribir 'Tus productos tienen costo de Con descuento:'
		por1<-x1
		por2<- x2*.10
		pre1<-x2-por2
		por3<-x3*.15
		pre2<-x3-por3
		por4<-x4*.20
		pre3<-x4-por4
		por5<-x5*.45
		por6<-x5-por5
		pre4<-x5-por6*.5
		Escribir 'Burro .2f pesos, Refresco .2f pesos, Energizante  2f pesos , Queso 2f pesos y jugo  2f pesos ',por1,pre1,pre2,pre3,pre4
		descuento<-por1+pre1+pre2+pre3+pre4
		Escribir 'El total es: .2f pesos',descuento
FinAlgoritmo