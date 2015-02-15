/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:51:00 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/ImageCaptureCore.framework/Versions/A/ImageCaptureCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface ICScannerFeatureEnumerationProps : NSObject {

	unsigned long long _indexOfCurrentValue;
	unsigned long long _indexOfDefaultValue;
	NSArray* _values;
	NSArray* _menuItemLabels;
	NSArray* _menuItemLabelsTooltips;

}

@property (assign) unsigned long long indexOfCurrentValue;              //@synthesize indexOfCurrentValue=_indexOfCurrentValue - In the implementation block
@property (assign) unsigned long long indexOfDefaultValue;              //@synthesize indexOfDefaultValue=_indexOfDefaultValue - In the implementation block
@property (assign) id currentValue; 
@property (assign) id defaultValue; 
@property (retain) NSArray * values;                                    //@synthesize values=_values - In the implementation block
@property (retain) NSArray * menuItemLabels;                            //@synthesize menuItemLabels=_menuItemLabels - In the implementation block
@property (retain) NSArray * menuItemLabelsTooltips;                    //@synthesize menuItemLabelsTooltips=_menuItemLabelsTooltips - In the implementation block
-(void)setMenuItemLabels:(NSArray *)arg1 ;
-(void)setMenuItemLabelsTooltips:(NSArray *)arg1 ;
-(id)getValidatedValue:(id)arg1 ;
-(unsigned long long)indexOfCurrentValue;
-(void)setIndexOfCurrentValue:(unsigned long long)arg1 ;
-(unsigned long long)indexOfDefaultValue;
-(void)setIndexOfDefaultValue:(unsigned long long)arg1 ;
-(void)setCurrentValue:(id)arg1 ;
-(NSArray *)menuItemLabels;
-(NSArray *)menuItemLabelsTooltips;
-(void)finalize;
-(void)dealloc;
-(NSArray *)values;
-(void)setValues:(NSArray *)arg1 ;
-(id)currentValue;
-(void)setDefaultValue:(id)arg1 ;
-(id)defaultValue;
@end

