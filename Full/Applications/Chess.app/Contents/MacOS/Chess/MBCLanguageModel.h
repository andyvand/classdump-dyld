/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:02 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Chess.app/Contents/MacOS/Chess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Chess/Chess-Structs.h>
@interface MBCLanguageModel : NSObject {

	OpaqueSRSpeechObjectRef fSystem;
	OpaqueSRSpeechObjectRef fToModel;
	OpaqueSRSpeechObjectRef fPromotionModel;
	MBCMoveCollection* fMoves;

}
-(id)initWithRecognitionSystem:(OpaqueSRSpeechObjectRef)arg1 ;
-(void)buildLanguageModel:(OpaqueSRSpeechObjectRef)arg1 fromMoves:(MBCMoveCollection*)arg2 takeback:(char)arg3 ;
-(id)recognizedMove:(OpaqueSRSpeechObjectRef)arg1 ;
-(void)addTo:(OpaqueSRSpeechObjectRef)arg1 languageObject:(OpaqueSRSpeechObjectRef)arg2 ;
-(OpaqueSRSpeechObjectRef)movesFrom:(unsigned char)arg1 to:(unsigned long long)arg2 pawn:(char)arg3 ;
-(OpaqueSRSpeechObjectRef)movesForPiece:(unsigned char)arg1 ;
-(OpaqueSRSpeechObjectRef)castles;
-(OpaqueSRSpeechObjectRef)pawnDrops;
-(OpaqueSRSpeechObjectRef)pieceDrops;
@end

