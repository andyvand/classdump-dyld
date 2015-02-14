/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/MediaUI.framework/Versions/A/MediaUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MediaUI/MediaUI-Structs.h>
@class MediaUITrimView;

@interface MediaUITrimIndicatorAccessibilityElement : NSObject {

	MediaUITrimView* _trimView;
	unsigned long long _part;

}

@property (nonatomic,retain,readonly) MediaUITrimView * trimView; 
@property (nonatomic,readonly) unsigned long long part; 
-(MediaUITrimView *)trimView;
-(id)initWithTrimView:(id)arg1 part:(unsigned long long)arg2 ;
-(CGRect)accessibilityRect;
-(unsigned long long)part;
-(id)init;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(char)accessibilityIsIgnored;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(id)accessibilityActionDescription:(id)arg1 ;
-(char)accessibilityIsAttributeSettable:(id)arg1 ;
-(void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2 ;
-(id)accessibilityActionNames;
-(void)accessibilityPerformAction:(id)arg1 ;
@end

