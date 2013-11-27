/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:31:42 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class OADParagraphProperties, NSMutableArray, OADCharacterProperties;

@interface OADParagraph : NSObject {

	OADParagraphProperties* mProperties;
	NSMutableArray* mTextRuns;
	OADCharacterProperties* mParagraphEndCharacterProperties;

}
-(void)dealloc;
-(id)init;
-(BOOL)isEmpty;
-(id)properties;
-(void)setProperties:(id)arg1 ;
-(id)plainText;
-(unsigned)textRunCount;
-(id)textRunAtIndex:(unsigned)arg1 ;
-(id)paragraphEndCharacterProperties;
-(void)setParentTextListStyle:(id)arg1 ;
-(id)addRegularTextRun;
-(void)removeUnnecessaryOverrides;
-(void)removeAllTextRuns;
-(id)addTextLineBreak;
-(id)addGenericTextField;
-(id)addDateTimeField;
-(id)addFooterField;
-(void)setParagraphEndCharacterProperties:(id)arg1 ;
-(BOOL)hasBulletCharacterProperties;
-(id)bulletCharacterProperties;
-(void)applyProperties:(id)arg1 ;
-(id)findFirstTextRunOfClass:(Class)arg1 ;
-(id)addSlideNumberField;
@end
