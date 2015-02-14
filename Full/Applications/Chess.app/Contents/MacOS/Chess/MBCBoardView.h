/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:01 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Chess.app/Contents/MacOS/Chess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Chess/Chess-Structs.h>
#import <AppKit/NSOpenGLView.h>

@class MBCBoardWin, MBCInteractivePlayer, MBCBoard, MBCDrawStyle, NSDictionary, NSString, MBCMove, NSCursor, NSTrackingArea;

@interface MBCBoardView : NSOpenGLView {

	MBCBoardWin* fController;
	MBCInteractivePlayer* fInteractive;
	MBCBoard* fBoard;
	unsigned char fPickedSquare;
	unsigned char fSelectedPiece;
	unsigned char fSelectedSquare;
	unsigned char fSelectedDest;
	MBCPosition fSelectedPos;
	MBCPosition fLastSelectedPos;
	float fRawAzimuth;
	CGPoint fOrigMouse;
	CGPoint fCurMouse;
	timeval fLastRedraw;
	float fAzimuth;
	float fElevation;
	float fBoardReflectivity;
	float fLabelIntensity;
	float fAmbient;
	MBCDrawStyle* fBoardDrawStyle[2];
	MBCDrawStyle* fPieceDrawStyle[2];
	MBCDrawStyle* fBorderDrawStyle;
	MBCDrawStyle* fSelectedPieceDrawStyle;
	float fLightPos[4];
	unsigned fNumberTextures[8];
	unsigned fLetterTextures[8];
	int fMaxFSAA;
	int fCurFSAA;
	int fLastFSAASize;
	BOOL fNeedStaticModels;
	BOOL fIsPickingFormat;
	BOOL fIsFloating;
	BOOL fWantMouse;
	BOOL fNeedPerspective;
	BOOL fInAnimation;
	BOOL fInBoardManipulation;
	int fVariant;
	int fSide;
	int fPromotionSide;
	NSDictionary* fBoardAttr;
	NSDictionary* fPieceAttr;
	NSString* fBoardStyle;
	NSString* fPieceStyle;
	MBCMove* fHintMove;
	MBCMove* fLastMove;
	NSCursor* fHandCursor;
	NSCursor* fArrowCursor;
	unsigned char fLastPieceDrawn;
	char fKeyBuffer;
	float fAnisotropy;
	int fNumSamples;
	NSTrackingArea* fTrackingArea;

}
-(void)startGame:(int)arg1 playing:(int)arg2 ;
-(void)generateModelLists;
-(char)facingWhite;
-(void)setupPieceDrawing:(char)arg1 reflect:(char)arg2 alpha:(float)arg3 ;
-(void)simplyDrawPiece:(unsigned char)arg1 at:(MBCPosition)arg2 scale:(float)arg3 ;
-(void)endPieceDrawing;
-(MBCPosition)squareToPosition:(unsigned char)arg1 ;
-(void)drawPiece:(unsigned char)arg1 at:(MBCPosition)arg2 reflect:(char)arg3 alpha:(float)arg4 ;
-(void)drawPiece:(unsigned char)arg1 at:(MBCPosition)arg2 reflect:(char)arg3 ;
-(void)placeLights;
-(void)drawPiece:(unsigned char)arg1 at:(MBCPosition)arg2 scale:(float)arg3 ;
-(void)drawArrowFrom:(MBCPosition)arg1 to:(MBCPosition)arg2 width:(float)arg3 ;
-(void)pickPixelFormat:(char)arg1 ;
-(void)setupPerspective;
-(void)drawBoard:(char)arg1 ;
-(void)drawPieces:(char)arg1 ;
-(void)drawSelectedPiece:(char)arg1 ;
-(void)drawCoords;
-(void)drawMove:(id)arg1 asHint:(char)arg2 ;
-(void)drawPiecesInHand;
-(void)drawPromotionPiece;
-(void)drawManipulator;
-(void)makeBoardSolid;
-(void)drawPiece:(unsigned char)arg1 at:(MBCPosition)arg2 scale:(float)arg3 reflect:(char)arg4 alpha:(float)arg5 ;
-(void)drawPosition;
-(void)loadField:(float*)arg1 fromAttr:(id)arg2 color:(id)arg3 entry:(id)arg4 ;
-(void)loadDrawStyle:(id)arg1 forColor:(id)arg2 part:(id)arg3 style:(id)arg4 attr:(id)arg5 ;
-(void)loadTextureAttr;
-(void)loadColorDrawStyles:(id)arg1 forColor:(int)arg2 ;
-(void)loadStaticTextures;
-(void)loadStyles;
-(int)maxAntiAliasing;
-(id)pixelFormatWithFSAA:(int)arg1 ;
-(void)drawNow;
-(void)hideMoves;
-(void)endGame;
-(int)facing;
-(void)unselectPiece;
-(void)selectPiece:(unsigned char)arg1 at:(unsigned char)arg2 ;
-(void)setStyleForBoard:(id)arg1 pieces:(id)arg2 ;
-(void)profileDraw;
-(void)showMoveAsHint:(id)arg1 ;
-(void)showMoveAsLast:(id)arg1 ;
-(void)clickPiece;
-(void)selectPiece:(unsigned char)arg1 at:(unsigned char)arg2 to:(unsigned char)arg3 ;
-(void)moveSelectionTo:(MBCPosition*)arg1 ;
-(unsigned char)positionToSquare:(const MBCPosition*)arg1 ;
-(unsigned char)positionToSquareOrRegion:(const MBCPosition*)arg1 ;
-(void)snapToSquare:(MBCPosition*)arg1 ;
-(void)wantMouse:(char)arg1 ;
-(void)animationDone;
-(void)increaseFSAA:(id)arg1 ;
-(void)decreaseFSAA:(id)arg1 ;
-(MBCPosition)mouseToPosition:(CGPoint)arg1 ;
-(MBCPosition)eventToPosition:(id)arg1 ;
-(MBCPosition)mouseToPositionIgnoringY:(CGPoint)arg1 ;
-(void)dragAndRedraw:(id)arg1 forceRedraw:(char)arg2 ;
-(CGRect)approximateBoundsOfSquare:(unsigned char)arg1 ;
-(id)describeSquare:(unsigned char)arg1 ;
-(void)selectSquare:(unsigned char)arg1 ;
-(void)loadColors;
-(void)drawGloss;
-(void)dealloc;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(char)accessibilityIsIgnored;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)accessibilityRoleAttribute;
-(id)accessibilityChildrenAttribute;
-(void)startAnimation;
-(void)update;
-(char)isOpaque;
-(char)acceptsFirstResponder;
-(void)keyDown:(id)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(char)mouseDownCanMoveWindow;
-(void)awakeFromNib;
-(void)mouseUp:(id)arg1 ;
-(void)updateTrackingAreas;
-(void)mouseMoved:(id)arg1 ;
-(void)needsUpdate;
-(void)reshape;
@end

