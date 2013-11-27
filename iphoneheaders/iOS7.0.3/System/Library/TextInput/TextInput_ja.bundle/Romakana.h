/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:34:16 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/TextInput/TextInput_ja.bundle/TextInput_ja
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSCharacterSet;

@interface Romakana : NSObject {

	BOOL _kanaMode;
	NSCharacterSet* _consonantsCharacterSet;

}
+(id)hiraganaString:(id)arg1 mappingArray:(id)arg2 withKanaMode:(BOOL)arg3 ;
+(id)oneKanaToRoma:(id)arg1 ;
+(id)hiraganaString:(id)arg1 withKanaMode:(BOOL)arg2 ;
+(id)kanaSymbol:(id)arg1 ;
-(void)dealloc;
-(id)roma2hiragana:(id)arg1 stripIncompleteRomajiAtEnd:(BOOL)arg2 incompleteRomajiLength:(unsigned*)arg3 ;
-(id)initWithKanaMode:(BOOL)arg1 ;
-(id)roma2katakana:(id)arg1 ;
-(id)adjustIncompleteRomaji:(id)arg1 ;
@end
