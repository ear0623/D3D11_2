DirectX 11 Tutorial 
=============

날자별 기록사항
-------------

2024.05.15
-------------


# 주제. 삼각형을 두개 그리면 어떻게 될까.(Depth의 학습을 위한 Vertex 배열 값을 이용해 픽셸세이더로 그린 삼각형을 두개 그리는 과정)

기존의 vertex 값으로 두개의 삼각형을 그리면 코드순서상 크기에 관계없이 나중에 찍힌 점에 색이 입혀지므로 서순 이슈로 인해 원하는 그림이 
안그려질 수 있다.

준비클래스 ID3D11DepthStencilView;
		ID3D11Texture2D;
		ID3D11DepthStencilState;

준비함수	ClearDepthStencilView;// rederframe함수 등 그리기전에 초기화하는 함수

vertex에 x y 'z'를 이용 z값에 따라 앞뒤 그리기 결정

stencil-> 위에 언저진의 형태적 의미;

2024.05.20
-------------
DirectX:: SpriteBatch와 Font클래스를 사용
Make_Unique를 사용 Batch 는 devicecontext
Font는 받은 파일의 경로 설정
batch로 draw 시작 끝, font가 drawstring 문자열 출력(문자내용,색,회전값,vector값,이펙트..)

단어 정리
-------------
펜, 브러시, 비트맵, 폰트 등 화면에 출력하는 요소들을 뜻합니다. 그리고 이런 GDI 오브젝트를 모아놓은 곳이 Device Context입니다. 그렇기 때문에 Device Context가 출력에 필요한 모든 정보를 가지는 데이터 구조체라고 하는 것입니다.

GDI(graphics device interface)

2024.05.21
-------------
매끄러운 렌더링을 위해 RECT를 사용 크기 계산 후 adjustwindowrect함수를 ㅏ용

2024.05.22
-------------
주제 : texturing
수정부분-> VertexShader & Pixelshader 에서 Color 부분을 2D 한정 float2 TexCoord(언리얼 마테리얼에서 보이던 함수)로 변경
InitializeSoene에서 드로우 6점 및 삼각형2개로 사각형을 지정 0~1/ createwictexture 여러함수 중 fromfile로 이미지 파일 로드..

2024.05.23
-------------
Vertex를 계속 찍어내는것이 아닌 지수를 사용하여 버택스의 값을 만든 후 buffer를 하나더 생성 후 vertexbuffer를 그린 후 인덱스버퍼를 프레임에 그리고, 버퍼사용시에 D3D11_BUFFER_DESC 클래스와 제로메로리로 초기화 후 그림

2024.05.23
-------------
vertex를 vertexshade.calss 를 제작 vertexbuffer를 templat으로 제작 다음번 예제는 indexbufferclass 사용

2024.05.24
-------------
indexbuffer 를 클래스화 시켜서 ifdefine으로 템플릿처럼 사용
