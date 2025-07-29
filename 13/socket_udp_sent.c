#include <arpa/inet.h>
#include <netinet/in.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>

#define SERVER_PORT 60002

void usage(const char *);

int main(int argc, char const *argv[]) {
  const char *server_ip;

  if (argc != 2) {
    usage(argv[0]);
  } else {
    server_ip = argv[1];
  }

  int sockfd = socket(AF_INET, SOCK_DGRAM, 0);

  struct sockaddr_in addr;
  addr.sin_family = AF_INET;
  addr.sin_port = htons(SERVER_PORT);
  inet_pton(AF_INET, server_ip, &addr.sin_addr.s_addr);

  const char *msg =
      "~~~~~~_(H81>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>><-.`?HJ~"
      "~~~~~~~~\n"
      "~:~:(J#3>>?>?>??>??>??>??>??>??>??>??>?+v77O<!_<??>?jv77O?>??>?>>?><.`("
      "H,:~:~:~~\n"
      "~~(+B1>>>?>>?>>?j+>>>?>>>?>>?>>?>>?>>?>+I..d>`` "
      "<>?>j}..z>?>>?>?>>>>>?-.7m_~~~:~\n"
      "(+B1j&&+>>?u&&+u5&&&&(..&x>?u&&+>>G&&x?+I..d>. "
      ".(&x?>uWAz>?>>>?>??>?>>>>-(N/~:~~\n"
      "#1>jr..w?>j{._X8Z........(Ij{.(0??d~.(I+I..O<+C..(C>j}..z?>?>?>>>>?>?>>>"
      "><.4x~~:\n"
      ">?>jr..w>?j{._kz1CCCzC..(C>j{.(I>>w~.(I+I..wC_.(v?>?j}..z>>?>>?>?>>?>??>"
      ">>><?N,~\n"
      ">>?jr..w>>j{._kz>>+v!.-J1>>j{.(I>>d_.(I+I..~.(v1>>>>j}..w+>>>>>?>>>>>>>?"
      ">>>>><7N\n"
      ">?>+r..w?>d>._kz?jC..(C>??>j{._I?>w~.(I+I..G,.(O+>?>j}..ZMm+?>?>???>??>>"
      "????>?>>\n"
      ">>??n_.(77!.._kzz!..?77771++l..?77~..(WzI..dzo_.?o?>j}..w~?Hm+?>>>>?>>?>"
      ">>>>?>?>\n"
      "?>>>+I--((Jn((VzO((((((((JI>1G--((&o((TNG((J??z-((wzjo((Z___?Wmx&x+>>?>?"
      ">?>>?>>?\n"
      ">>>?>>>>>>>>+Mlz>?>>?>?>>?>>>?>??dD_.`.H2>>>>>>>>>>>>< #~_ "
      "`.__7Hx?>>>>>?>>?>+TW\n"
      ">?ugY\"\"7\"\"YQxHZl+>>>>?>>?>>?>>+&d@7<??!-N+>>?>>>?>>>?:.#_.`.`..._("
      "TWx?>j&x>>>>>>\n"
      "jX^..........TRlz>?>>>>?>>+xT1?g@~_``.`.Wp?>>?>?>>?>>!.F_.-(+H##"
      "HHMmgdNaxzT9Wggg\n"
      "D.~~..~..~..._.Hz?>?>?>>>?>>>>d@~_......,N?>>>>>>?>>>`W>(H###MMMMHVTYM@"
      "kvT8QxJWx\n"
      "Z9Cz7Th,..~..._,Nz>>>>jp>>?>?d@~_-..JgggJM2>>?>>?>>?<.@(MM5dgg@@g3?4,."
      "WN+><JKTNd\n"
      ">>>>?>>?b..~..~_dO+>?>dN>>>+d@(k#N###MMYWMN>>?>>>>?>~d>_-.(@g@g@Mm-(Wc("
      "N?>>,N+>7\n"
      ">>?>>?>?d<..~...Klz?>>WNc?uMHHHMMM@gg#T8a-Mc>>?>?>>:.@_`._J@ggHMMMMHHM,"
      "qb>>~NWe>\n"
      ">?>>>>>>d~...~.(Nllz>jMMPgHHH#=dg@g@gb_~dMMb>?uc>><(#~.`` "
      ",#SvvWHH#vrr].Mc><d<dh\n"
      ">>?>?>?jD.~..-J6Hyllzd@JM@@#^.J@gg@gNMNmW@M#>>dP><(#!.`..` "
      "jyrrrrrrttO%`(N+>(b~(\n"
      "Mm+>>+dt.~((J5?>?NzluM>?H@D...J@g@gMMMM#vvrd?j#$<j@~.`.`.`` "
      "?yllllllzv`..?Nx<W_~\n"
      ">7Mm??YYYYC?>>>>>JNld@~_.^.._`,HH9SvHMMSrrtdd8H1d5_``.`.`..`  7O&&&v^ "
      "....?Nx(b~\n"
      ">?+MNx>>?>>>>?>>>?dMM>_``` ``  Srtrrrttttlld^(NB!.`..`.`.``.``  ... "
      "......._We4x\n"
      "z+>d#N>>>>?>>>?>>>>?N/_...````` "
      "4sllllll=uv``(!.`.`.`.`.-..`...........~~~~._HxN\n"
      "yluMM#>?>>>?>>>?>>?>+We......```` 7Tzzz?= "
      "...`.`.`.`.`...`.``.`.`.......~..~.(NJ\n"
      "THWM@@?>?>>>?>>?>>>?>>?HJ........``.```_``..`.`.`.`.``.``.`.``.`........"
      ".....(MI\n"
      "zdMSzMR?>>?>>?>>?jax>>>>?HJ_~.......``.``.``.`.`.`.`..``.`...`..`.`....."
      "....(M5>\n"
      "MBlld#dNz+>>>>>>>?>zTHgx+>1Tm,~.......`..`..`.`.`.`..VC7h.``.``.`.``...."
      "...JM$>>\n"
      "lllld#lvNszz?>?>>>>>>>?vHMHagdHa,_..`.``.``.`.`.`.`,b++J7~.`..``.`.```` "
      ".dBOMg+>\n"
      "sllldDlllTmylz+?>?>>>>>>?We~__~~~_.`.`..`..`.`.`.`.`.`.``.`.`..`..`...&"
      "M6lld@z7N\n"
      "NmlzM0llllvHmyllje+?>?>>>?dm_..`....`.``.``.`.`.`.`.`.`..`.``.`..."
      "JWBIzMylldDl-M\n"
      "dMNdNlllllllzTNslzTmx?>?>>>?N,-..``.`.`.`..`.`.`.`.`.`.``. "
      "..(gH9Illllld#lldKlz(\n"
      "lzMN@llllllllllvTmylZBmx?>>>+WaJJ-_~_____--.........-"
      "JgkMHBUOlllllllllllHyldbll>\n"
      "MMWMIllllllllllluMTmlldVHHg+>>?M#HHMMMMMM##MM#TT7=<<"
      "HHHHylllllllllllllllvNzvNllz\n"
      "lld#lllllllllllzd6lvNzdbllOVHNQggNazlugMNWHHHNJ&"
      "XUUHHHMdMmslllllllllllllldNlHOll\n"
      "ldMIllllllllllzd6lllvNOMNslllllTRllqHMmmmNWHHHHNkCq#HH#"
      "HmmMKlllllllllllllldNdKll\n"
      "NM8llllllllllzd6lllllvNMlThzlllldNdMmmmmmgMdMHHMMgHHMMHMHHHNllllllzOllll"
      "lllvHNOl\n"
      "d#"
      "llllllllllzd6llllllldMllzWslllldMgHmmgmmmMNMMHWMpMRUkWkNbHkllllllOOlllll"
      "lllv6l\n"
      "#llllllllllld6lllllllll8lllldRlllldNkkkkkkkkkHydMWkWWMHWbNkHbllllllzrOll"
      "llllllll\n"
      "Olllllllllld6lllllllllllOlllldNzlllMHkbkbkkbkHWWbWkkWbbbkMkbMlllllllOrll"
      "llllllll\n"
      "lllllllllld8lllllllllllOOlllllvNzQldNkkHbbkbbkbkHWbHWkkkkMbkMZllllllOrOl"
      "llllllll\n"
      "llllllllld#"
      "lllllllllllOrlllllllvNdRzMbbHHkkkkbkbbWkkWkbkkHkkHblllllllrrOllllllll\n";
  ssize_t send_len;

  /* send_len = sendto(sockfd, message, strlen(message), 0, (struct sockaddr
   * *)&addr, sizeof(addr)); */
  /* if (send_len < 1) { */
  /*     perror("sendto"); */
  /*     exit(1); */
  /* } */

  send_len = sendto(sockfd, msg, strlen(msg), 0, (struct sockaddr *)&addr,
                    sizeof(addr));
  if (send_len < 1) {
    perror("sendto");
    exit(1);
  }

  close(sockfd);

  return 0;
}
void usage(const char *msg) {
  printf("使用方法：%s IPアドレス\n", msg);
  exit(1);
}
