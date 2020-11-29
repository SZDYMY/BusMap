#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
#include "BusMap.h"
void gotoxy(int x, int y);//���꺯��
void HideCursor(int n);//���ع��

void LoginScreen();//��������
void Shutdown();//�ػ�����

void MainMenu();//���˵�
//����Ա
void LoginScreeForAdministrator();//����Ա��¼����
void MenuForAdministrator();//����Ա��������
void OutPutAllBusName();//����������й���������ʼվ���յ�վ
void OutPutAllStationName();//�����������վ��

void MenuForBus();//���������˵�
void AddBus();//���ӹ���������������·��
void DeleteBus();//ɾ������·�ߡ�����ɾ����·��
void ChangeBusInfo();//�޸Ĺ�����·
void ChangeBusName();//�޸Ĺ�������
void ChangeBusStartandEnd();//�޸Ĺ������,�յ�

void MenuForStation();//����վ��˵�
void AddStation();//����վ��
void DeleteStation();//ɾ��վ��
void ChangeStationInfo();//�޸�վ����Ϣ

void ChangeInfo();//����Ա�����˻�������
//�˿�
void MenuForCustomer();//�˿ͽ���
void OutPutBusRoute();//���ĳ�����й�����·
void OutPutStationInf();//�����վ��������������·
void SearchRoute();//Ϊ�˿͹滮��·��໻��1��
const char Login[30][200]=
{
    {" ______________________________________________________________________________________________"},
    {"��                                                                                             ��"},
    {"��                           ___________________________                                       ��"},
    {"��            ____________ // _________________________ \\ __________________                   ��"},
    {"��          /   _____________________  ��___________�� ��      ��      �� ��      \\ _______          ��"},
    {"��         ��   ��     ��      ��        �� ��  _______  �� ��______��______�� ��  _____ \\ ---  \\         ��"},
    {"��         ��   ��     ��      ��________�� �� ��   ��   �� �� ��      ��      �� �� ��     �� ��    \\_\\        ��"},
    {"��         ��   ��_____��______��        �� �� ��   ��   �� �� ��      ��      �� �� ��     �� ��               ��"},
    {"��         ��   ��____________��________�� �� ��   ��   �� �� ��______��______�� �� ��     �� ��               ��"},
    {"��         ��                           �� ��   ��   �� ��                 �� ��     �� ��               ��"},
    {"��         ��                           �� ��   ��   �� ��                 �� ��     �� ��               ��"},
    {"��         ��                 _____     �� ��___��___�� ��      _____      �� ��_____�� ��               ��"},
    {"��         ��________________/ ___ \\____��___________��_____/ ___ \\_____��_________��               ��"},
    {"��                           / _ \\                        / _ \\                                ��"},
    {"��                           \\___/                        \\___/                                ��"},
    {"��                                                                                             ��"},
    {"��                                                                                             ��"},
    {"��                                                                                             ��"},
    {"��                         =============��ӭʹ�ù�������ϵͳ=============                      ��"},
    {"��                                                                                             ��"},
    {"��                              _____________________________________                          ��"},
    {"��                             ��                                    ��                          ��"},
    {"��                             ����������������������������������������������������������������������������                          ��"},
    {"��                                                                                             ��"},
    {"��                         ==============================================                      ��"},
    {"��                                                                                             ��"},
    {"��                                                                                             ��"},
    {"����������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������������"}
};
const char Shut[15][100]=
{
    {"                    *                         *                             *                  "},
    {"                  *  *                      *  *                          *  *                 "},
    {"                 *   *                     *   *                         *   *                 "},
    {"               **   *                    **   *                        **   *                  "},
    {"        ***  **    *********      ***  **    *********          ***  **    *********           "},
    {"        ***  **          **       ***  **          **           ***  **          **            "},
    {"        ***  **         **        ***  **         **            ***  **         **             "},
    {"        ***  **        **         ***  **        **             ***  **        **              "},
    {"        ***  **********           ***  **********               ***  **********                "},
    {"                                                                                               "},
    {"                                                                                               "},
    {"                                                                                               "},
    {"                     ��л����ʹ��,�ټ�!���ڹػ���                                              "}
};
#endif // MENU_H_INCLUDED