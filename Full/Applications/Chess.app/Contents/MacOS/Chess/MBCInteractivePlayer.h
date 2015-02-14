/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:01 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Chess.app/Contents/MacOS/Chess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Chess/Chess-Structs.h>
#import <Chess/MBCPlayer.h>

@class MBCBoardWin, MBCLanguageModel, NSData;

@interface MBCInteractivePlayer : MBCPlayer {

	MBCBoardWin* fController;
	MBCLanguageModel* fLanguageModel;
	int fLastSide;
	int fSide;
	int fVariant;
	unsigned char fFromSquare;
	BOOL fStartingSR;
	BOOL fAnnounceCheck;
	OpaqueSRSpeechObjectRef fRecSystem;
	OpaqueSRSpeechObjectRef fRecognizer;
	OpaqueSRSpeechObjectRef fModel;
	NSData* fSpeechHelp;
	char fHasObservers;
	char fPendingMouseUpdate;

}
-(void)removeChessObservers;
-(void)startGame:(int)arg1 playing:(int)arg2 ;
-(void)opponentMoved:(id)arg1 ;
-(void)startSelection:(unsigned char)arg1 ;
-(void)endSelection:(unsigned char)arg1 animate:(char)arg2 ;
-(void)recognized:(OpaqueSRSpeechObjectRef)arg1 ;
-(void)updateNeedMouse:(id)arg1 ;
-(void)doUpdateNeedMouse;
-(void)initSR;
-(void)makeSpeechHelp;
-(void)humanMoved:(id)arg1 ;
-(void)reject:(id)arg1 ;
-(void)takeback:(id)arg1 ;
-(void)gameEnded:(id)arg1 ;
-(char)useAlternateSynthForMove:(id)arg1 ;
-(id)stringForCheck:(id)arg1 ;
-(void)speakMove:(id)arg1 text:(id)arg2 check:(char)arg3 ;
-(id)stringFromMove:(id)arg1 ;
-(void)speakMove:(id)arg1 ;
-(void)speakMove:(id)arg1 withWrapper:(id)arg2 ;
-(void)switchSides:(id)arg1 ;
-(void)allowedToListen:(char)arg1 ;
-(void)announceHint:(id)arg1 ;
-(void)announceLastMove:(id)arg1 ;
-(void)removeController;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

