/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:36 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSSlider.h>

@class CIFilter, NSString;

@interface IKSlider : NSSlider {

	id _delegate;
	CIFilter* _filter;
	NSString* _filterName;
	NSString* _key;
	double _defaultValue;

}

@property (assign) id delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (assign) double defaultValue;              //@synthesize defaultValue=_defaultValue - In the implementation block
@property (assign) CIFilter * filter;                //@synthesize filter=_filter - In the implementation block
@property (copy) NSString * filterName;              //@synthesize filterName=_filterName - In the implementation block
@property (copy) NSString * key;                     //@synthesize key=_key - In the implementation block
-(CIFilter *)filter;
-(void)setFilter:(CIFilter *)arg1 ;
-(NSString *)filterName;
-(char)snapsToDefault;
-(void)sliderChanged:(id)arg1 ;
-(void)setFilterName:(NSString *)arg1 ;
-(void)leftImageClicked:(id)arg1 ;
-(void)rightImageClicked:(id)arg1 ;
-(void)setupWithDelegate:(id)arg1 filterArray:(id)arg2 filter:(id)arg3 key:(id)arg4 ;
-(void)setDelegate:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)key;
-(id)delegate;
-(void)setDefaultValue:(double)arg1 ;
-(double)defaultValue;
-(void)setKey:(NSString *)arg1 ;
@end

