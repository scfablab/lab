**************************************************************
　　Roland CAMM-1 DRIVER for Windows(R) Vista (32ビット版)
**************************************************************

最初にお読みください。インストールの手順が書かれています。
本書では、Windows Vista の基本的な操作方法についてすでにご理解いただいているものとして説明しています。
この書類を「メモ帳」で開いたときは、[右端で折り返す] をオンにすると読みやすくなります。

目次
1. 概要
2. ドライバのインストール
3. ドライバのアンインストール
4. 注意事項及び特記事項


※ Windows(R)は、米国Microsoft(R) Corporation の米国およびその他の国における登録商標または商標です。
※ TrueTypeは、米国アップルコンピュータ社の登録商標です。
※Corel、CorelDRAWは、Corel CorporationまたはCorel Corporation Limitedの登録商標または商標です。
その他、記載されている会社名、製品名は、各社の商標および登録商標です。

Copyright (C) 2007 - 2014 Roland DG Corporation

R3-141104


------------------------------------------------------------------------

＜1. 概要＞

このドライバは、日本語 Windows Vista 32ビット版 で動作する、当社製サインメーカーCAMM-1シリーズ用のドライバです。
ドロー系グラフィックスソフト(主にCADソフト)を使って、CAMM-1でカッティングができます。


------------------------------------------------------------------------

＜2. ドライバのインストール＞

注意：
ダウンロードしたドライバーのインストール手順です。
機器に付属するディスクからインストールするときは、その起動メニューからドライバーのインストールをクリックしてください。


※ 管理者権限を持ったユーザーでログオンしてください。
※ 旧バージョンのドライバがインストールされているときは、アンインストールしたあとでインストールしてください。ドライバの削除方法については、次項の「ドライバのアンインストール」を参照してください。


1.  機器の電源を切り、コンピュータと機器間の接続ケーブルを外します。
2.  コンピュータの電源を入れます。Windows の起動後に、機器の電源を入れます。このときは、まだコンピュータと機器を接続ケーブルで接続しないでください。
3.  [スタート]-[すべてのプログラム]-[アクセサリ]-[ファイル名を指定して実行]を選択して、[参照]をクリックします。
4.  ドライバの入ったドライブ名またはフォルダ名を選択します。
5. 「SETUP.EXE」を選択して[開く]をクリックしたあと、[OK]をクリックします。
6.  [ユーザーアカウント制御]が表示されますので、[許可]をクリックします。
7.  ドライバのインストーラプログラムが起動します。
8.  [インストール]をクリックして選びます。
　　使用する機器と接続ポートを選択して、[開始]をクリックします。
9.  インストールの終了後、コンピュータと機器間をケーブルで接続します。


------------------------------------------------------------------------

＜3. ドライバのアンインストール＞

※ 管理者権限を持ったユーザーでログオンしてください。


1.  機器の電源を切り、コンピュータと機器間の接続ケーブルを外します。
2.  Windows を起動します。
3.  [スタート]-[コントロールパネル]-[プログラムのアンインストール]をクリックします。
4.  削除する機器のドライバをクリックして選択し、[アンインストール]をクリックします。
5.  削除確認のメッセージが表示されますので、[はい]をクリックします。
6.  [スタート]-[すべてのプログラム]-[アクセサリ]-[ファイル名を指定して実行]を選択して、[参照]をクリックします。
7.  ドライバの入ったドライブ名またはフォルダ名を選択します。（※注釈）
8. 「SETUP.EXE」を選択して[開く]をクリックしたあと、[OK]をクリックします。
9.  [ユーザーアカウント制御]が表示されますので、[許可]をクリックします。
10.  ドライバのインストーラプログラムが起動します。
11.  [アンインストール]をクリックして選びます。
　　 削除する機器を選択して、[開始]をクリックします。
12.  コンピュータの再起動が必要な場合は再起動を求める画面が表示されますので、[はい]をクリックします。
13.  コンピュータの再起動が終了するとアンインストール終了です。


（※注釈）
CDを使うときは、次のフォルダを指定します。(CDドライブが Dドライブの場合)

	D:\Drivers\WINVISTAX86

CDを使わない場合は、削除する機器のドライバを弊社ホームページ(http://www.rolanddg.co.jp/)からダウンロードし、解凍先のフォルダを指定します。


------------------------------------------------------------------------

＜4. 注意事項及び特記事項＞

●本ドライバは[テストページの印刷]をサポートしていません。

●CutStudioを使うときは、[高解像度]オプションを ON にしてください。
[高解像度]オプションの設定方法は次の通りです。

1. 全てのアプリケーションソフトウェアを終了します。
2. Windows の[スタート]ボタンをクリックし、[コントロールパネル]-[プリンタ]フォルダを開きます。
3. Roland CAMM-1ドライバのアイコンをクリックして選びます。
4. [ファイル]メニューの[印刷設定]をクリックします。
5. [オプション]タブの[高解像度]を ON にします。


●本ドライバは、ビットマップデータの出力をサポートしていません。
ビットマップデータで出力するアプリケーション(一般にワープロやペイント系アプリケーションなどがこれに該当します)を使ってカッティングはできません。
ドロー系グラフィックソフトやCADソフトなどのドロー系アプリケーションをお使いください。

●カッティングラインの線幅は、次のように指定してください。
指定外の太さの線は、カッティングできないことがあります。

※アプリケーションの設定
　CorelDRAW X7/X6/X5/X4/X3	・・・ 極細線

●図形内の網掛け情報は、CAMM-1に出力されません。
本ドライバは、図形の網掛けには対応していません。網掛け情報は、ビットマップデータと解釈されて無視されます。

●図形に「塗りつぶし」のあるオブジェクトは2度切りしてしまうことがあります。
[オプション]タブの[ポリゴンをカッティング]をオフにすると、2度切りを回避できる場合があります。
正しくカットしたい線は、「塗り」を無しにし(白色は塗り無しではありません)、「輪郭線」のみにしてください。

●文字の輪郭をカッティングするには、文字をアウトライン化します。文字のアウトライン化機能のあるアプリケーションをお使いください。
フォントによって、アウトライン化できるものとできないものとがあります。
一般に、OpenTypeフォント, TrueTypeフォントなどがアウトライン化可能なフォントですが、アプリケーションによって対応していない場合があります。

●CAMM-1シリーズ本体の設定は全て "ローテートなし" または "RO-0" でご使用ください。
ローテートのオン／オフは、ドライバで設定します。

●付属シートでテストカットする場合は、ドライバで用紙サイズを付属シートの大きさに設定してから、テストカットを行ってください。


##### CorelDRAW X7/X6/X5/X4/X3 から出力するときの注意事項 #####

●カッティングラインの線幅は「極細線」に設定してください。
「極細線」以外の太さの線は、線を細長い矩形としてカッティングします。

●[ページレイアウトの設定]画面の[プリンタから設定]でドライバで指定したカッティング範囲の長さが反映されるのは、最大で 3276.7 mmです。


