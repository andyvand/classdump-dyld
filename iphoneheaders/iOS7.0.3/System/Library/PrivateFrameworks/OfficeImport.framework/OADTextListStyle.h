/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:31:43 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface OADTextListStyle : NSObject {

	NSMutableArray* mParagraphProperties;

}
-(void)dealloc;
-(id)init;
-(id)propertiesForListLevel:(unsigned)arg1 ;
-(void)setParentTextListStyle:(id)arg1 ;
-(id)defaultProperties;
-(id)initWithDefaults;
-(void)removeUnnecessaryOverrides;
-(void)flatten;
-(void)overrideWithTextStyle:(id)arg1 ;
-(void)setPropertiesForListLevel:(unsigned)arg1 properties:(id)arg2 ;
@end
