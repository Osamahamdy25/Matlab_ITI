function varargout = image_task2(varargin)
% IMAGE_TASK2 MATLAB code for image_task2.fig
%      IMAGE_TASK2, by itself, creates a new IMAGE_TASK2 or raises the existing
%      singleton*.
%
%      H = IMAGE_TASK2 returns the handle to a new IMAGE_TASK2 or the handle to
%      the existing singleton*.
%
%      IMAGE_TASK2('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in IMAGE_TASK2.M with the given input arguments.
%
%      IMAGE_TASK2('Property','Value',...) creates a new IMAGE_TASK2 or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before image_task2_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to image_task2_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help image_task2

% Last Modified by GUIDE v2.5 11-Jan-2022 21:05:36

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @image_task2_OpeningFcn, ...
                   'gui_OutputFcn',  @image_task2_OutputFcn, ...
                   'gui_LayoutFcn',  [] , ...
                   'gui_Callback',   []);
if nargin && ischar(varargin{1})
    gui_State.gui_Callback = str2func(varargin{1});
end

if nargout
    [varargout{1:nargout}] = gui_mainfcn(gui_State, varargin{:});
else
    gui_mainfcn(gui_State, varargin{:});
end
% End initialization code - DO NOT EDIT


% --- Executes just before image_task2 is made visible.
function image_task2_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to image_task2 (see VARARGIN)

% Choose default command line output for image_task2
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes image_task2 wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = image_task2_OutputFcn(hObject, eventdata, handles) 
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;



function num_Callback(hObject, eventdata, handles)
% hObject    handle to num (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of num as text
%        str2double(get(hObject,'String')) returns contents of num as a double


% --- Executes during object creation, after setting all properties.
function num_CreateFcn(hObject, eventdata, handles)
% hObject    handle to num (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in pushbutton1.
function pushbutton1_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
s=get(handles.num,'string');
axes(handles.axes1);
if str2double(s)>=60
     a=imread('laugh.jpg');
    imshow(a);
elseif str2double(s)<60
     b=imread('sad.jpg');
    imshow(b);
end
