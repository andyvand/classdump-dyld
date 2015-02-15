/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/ImageCaptureCore.framework/Versions/A/ImageCaptureCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageCaptureCore/ICScannerFeature.h>

@class NSArray;

@interface ICScannerFeatureEnumeration : ICScannerFeature {

	id _evProps;

}

@property (assign) id currentValue; 
@property (readonly) id defaultValue; 
@property (readonly) NSArray * values; 
@property (readonly) NSArray * menuItemLabels; 
@property (readonly) NSArray * menuItemLabelsTooltips; 
-(id)oldAndNewSettings:(id)arg1 ;
-(void)setMenuItemLabels:(NSArray *)arg1 ;
-(void)setMenuItemLabelsTooltips:(NSArray *)arg1 ;
-(void)setCurrentValue:(id)arg1 ;
-(NSArray *)menuItemLabels;
-(NSArray *)menuItemLabelsTooltips;
-(void)finalize;
-(void)dealloc;
-(id)description;
-(NSArray *)values;
-(id)currentValue;
-(id)initWithDictionary:(id)arg1 ;
-(void)setDefaultValue:(id)arg1 ;
-(id)defaultValue;
@end
