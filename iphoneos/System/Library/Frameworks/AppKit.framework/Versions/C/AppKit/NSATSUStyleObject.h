/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:11 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSMutableArray;

@interface NSATSUStyleObject : NSObject {

	OpaqueATSUStyleRef style;
	NSMutableArray* exclusives;

}
-(id)init;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(OpaqueATSUStyleRef)style;
-(void)addFeatureDescriptions:(id)arg1 ;
-(void)addVariationDescriptions:(id)arg1 ;
-(void)mergeInVariations:(OpaqueATSUStyleRef)arg1 ;
-(char)isTypeNotExclusive:(unsigned short)arg1 ;
-(void)mergeFontFeaturesInto:(id)arg1 ;
-(void)mergeAttributesInto:(id)arg1 ;
-(void)mergeFontVariationsInto:(id)arg1 ;
-(id)exclusives;
-(void)mergeStyleInto:(id)arg1 ;
-(id)initWithStyle:(OpaqueATSUStyleRef)arg1 ;
-(void)setFeatures:(unsigned short*)arg1 selectors:(unsigned short*)arg2 count:(unsigned long long)arg3 ;
-(void)setVariations:(unsigned*)arg1 Values:(int*)arg2 Count:(unsigned long long)arg3 ;
-(void)merge:(OpaqueATSUStyleRef)arg1 ;
-(void)setAttributes:(unsigned*)arg1 Values:(void*)arg2 ValueSizes:(unsigned long long*)arg3 Count:(unsigned long long)arg4 ;
-(void)typeIsNotExclusive:(unsigned short)arg1 ;
-(id)convertToDictionary;
@end

