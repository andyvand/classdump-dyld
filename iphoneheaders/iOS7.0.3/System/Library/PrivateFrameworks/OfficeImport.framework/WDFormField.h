/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:31:50 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/WDRun.h>

@class NSString;

@interface WDFormField : WDRun {

	unsigned mPosition;
	BOOL mLinkAbsolute;
	BOOL mLinkSpecifyingNamedLocation;
	NSString* mNamedLocation;
	NSString* mURI;
	NSString* mMacName;
	NSString* mDosName;

}
-(void)dealloc;
-(void)setPosition:(unsigned)arg1 ;
-(unsigned)position;
-(int)runType;
-(id)initWithParagraph:(id)arg1 ;
-(BOOL)linkAbsolute;
-(void)setLinkAbsolute:(BOOL)arg1 ;
-(BOOL)linkSpecifyingNamedLocation;
-(void)setLinkSpecifyingNamedLocation:(BOOL)arg1 ;
-(id)namedLocation;
-(void)setNamedLocation:(id)arg1 ;
-(id)URI;
-(void)setURI:(id)arg1 ;
-(id)macName;
-(void)setMacName:(id)arg1 ;
-(id)dosName;
-(void)setDosName:(id)arg1 ;
@end
