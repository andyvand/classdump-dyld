/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:31:43 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OADEffectsParent.h>

@class OADFill, NSArray;

@interface OADTableBackground : NSObject <OADEffectsParent> {

	OADFill* mFill;
	NSArray* mEffects;

}
-(void)dealloc;
-(id)fill;
-(void)setFill:(id)arg1 ;
-(id)effects;
-(BOOL)hasEffects;
-(void)setEffects:(id)arg1 ;
@end
