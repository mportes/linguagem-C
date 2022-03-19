#include <stdio.h>
#include <conio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int d, m, a, da;
	
	printf("Digite o dia: ");
	scanf("%d", &d);
	
	printf("Digite o mês: ");
	scanf("%d", &m);
	
	printf("Digite o ano: ");
	scanf("%d", &a);
	
	printf("\n\n");
	//leitura normal das variáveis
	
	if((a<1900) || (a>2100))
		printf("Ano inválido! O ano precisa ser entre 1900 e 2100!");
	else {
		if((m<=0) || (m>12))
			printf("Mês inválido! O mês precisa ser entre 1 e 12!");
		else {
			if((d<=0) || (d>31))
				printf("Dia inválido! O dia precisa ser entre 1 e 31!");
			else {
				if((d==31) && ((m==2) || (m==4) || (m==6) || (m==9) || (m==11)))
					printf("O dia não corresponde ao mês!");	
					//verificação da correspondência das variáveis às normas de calendário
				else {
					if((d==29) && (m==2)) {
						if(a%4==0) {
							if(a%100==0) {
								if(a%400==0) {
									da=60;
									printf("Dia %d do ano!", da);
								} else printf("O dia não corresponde ao mês!");
							} else {
								da=60;
								printf("Dia %d do ano!", da);
							}
						}
						else printf("O dia não corresponde ao mês!", a);
					} 
					else {
						if(a%4==0) {
							if(a%100==0) {
								if(a%400==0) {
									if(m==1){
										da=d;
										printf("O dia %d do ano!", da);
									} else {
										if(m==2) {
											da=31+d;
											printf("O dia %d do ano!", da);
										} else {
											if(m==3) {
												da=60+d;
												printf("O dia %d do ano!", da);
											} else {
												if(m==4) {
													da=91+d;
													printf("O dia %d do ano!", da);
												} else {
													if(m==5) {
														da=121+d;
														printf("O dia %d do ano!", da);
													} else {
														if(m==6) {
															da=152+d;
															printf("O dia %d do ano!", da);
														} else {
															if(m==7) {
																da=182+d;
																printf("O dia %d do ano!", da);
															} else {
																if(m==8) {
																	da=213+d;
																	printf("O dia %d do ano!", da);
																} else {
																	if(m==9) {
																		da=244+d;
																		printf("O dia %d do ano!", da);
																	} else {
																		if(m==10) {
																			da=274+d;
																			printf("O dia %d do ano!", da);
																		} else {
																			if(m==11){
																				da=305+d;
																				printf("O dia %d do ano!", da);
																			} else {
																				da=335+d;
																				printf("O dia %d do ano!", da);
																			}
																			//Somei a quantidade de dias dos meses passados com a variável dia.
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								} else {
									if(m==1) {
										da=d;
										printf("O dia %d do ano!", da);
									} else {
										if(m==2) {
											da=31+d;
											printf("O dia %d do ano!", da);
										} else {
											if(m==3) {
												da=59+d;
												printf("O dia %d do ano!", da);
											} else {
												if(m==4) {
													da=90+d;
													printf("O dia %d do ano!", da);
												} else {
													if(m==5) {
														da=120+d;
														printf("O dia %d do ano!", da);
													} else {
														if(m==6) {
															da=151+d;
															printf("O dia %d do ano!", da);
														} else {
															if(m==7) {
																da=181+d;
																printf("O dia %d do ano!", da);
															} else {
																if(m==8) {
																	da=212+d;
																	printf("O dia %d do ano!", da);
																} else {
																	if(m==9) {
																		da=243+d;
																		printf("O dia %d do ano!", da);
																	} else {
																		if(m==10) {
																			da=273+d;
																			printf("O dia %d do ano!", da);
																		} else {
																			if(m==11) {
																				da=304+d;
																				printf("O dia %d do ano!", da);
																			} else {
																				da=334+d;
																				printf("O dia %d do ano!", da);
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							} else {
								if(m==1) {
									da=d;
									printf("O dia %d do ano!", da);
								} else {
									if(m==2) {
										da=31+d;
										printf("O dia %d do ano!", da);
									} else {
										if(m==3) {
											da=60+d;
											printf("O dia %d do ano!", da);
										} else {
											if(m==4) {
												da=91+d;
												printf("O dia %d do ano!", da);
											} else {
												if(m==5) {
													da=121+d;
													printf("O dia %d do ano!", da);
												} else {
													if(m==6) {
														da=152+d;
														printf("O dia %d do ano!", da);
													} else {
														if(m==7) {
															da=182+d;
															printf("O dia %d do ano!", da);
														} else {
															if(m==8) {
																da=213+d;
																printf("O dia %d do ano!", da);
															} else {
																if(m==9) {
																	da=244+d;
																	printf("O dia %d do ano!", da);
																} else {
																	if(m==10) {
																		da=274+d;
																		printf("O dia %d do ano!", da);
																	} else {
																		if(m==11) {
																			da=305+d;
																			printf("O dia %d do ano!", da);
																		} else {
																			da=335+d;
																			printf("O dia %d do ano!", da);
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						} else {
							if(m==1) {
								da=d;
								printf("O dia %d do ano!", da);
							} else {
								if(m==2) {
									da=31+d;
									printf("O dia %d do ano!", da);
								} else {
									if(m==3) {
										da=59+d;
										printf("O dia %d do ano!", da);
									} else {
										if(m==4) {
											da=90+d;
											printf("O dia %d do ano!", da);
										} else {
											if(m==5) {
												da=120+d;
												printf("O dia %d do ano!", da);
											} else {
												if(m==6) {
													da=151+d;
													printf("O dia %d do ano!", da);
												} else {
													if(m==7) {
														da=181+d;
														printf("O dia %d do ano!", da);
													} else {
														if(m==8) {
															da=212+d;
															printf("O dia %d do ano!", da);
														} else {
															if(m==9) {
																da=243+d;
																printf("O dia %d do ano!", da);
															} else {
																if(m==10) {
																	da=273+d;
																	printf("O dia %d do ano!", da);
																} else {
																	if(m==11) {
																		da=304+d;
																		printf("O dia %d do ano!", da);
																	} else {
																		da=334+d;
																		printf("O dia %d do ano!", da);
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	
	getch();
	return 0;
}
