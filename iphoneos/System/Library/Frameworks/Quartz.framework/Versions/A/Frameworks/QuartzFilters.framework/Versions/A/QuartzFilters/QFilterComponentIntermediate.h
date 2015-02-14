/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzFilters.framework/Versions/A/QuartzFilters
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzFilters/QuartzFilters-Structs.h>
#import <QuartzFilters/QFilterComponent.h>

@interface QFilterComponentIntermediate : QFilterComponent
+(char)isUsedInFilter:(QFilterInfo*)arg1 ;
+(id)newWithFilterInfo:(QFilterInfo*)arg1 upperItem:(id)arg2 ;
-(char)addCell;
-(void)updateOptionsInfo:(id)arg1 ;
-(void)updateProfileInfo;
-(void)resetCellInfo:(id)arg1 ;
-(void)resetOptionsInfo;
-(id)initWithFilterInfo:(QFilterInfo*)arg1 upperItem:(id)arg2 ;
-(char)addCellWithSettings:(int)arg1 data:(int)arg2 type:(int)arg3 profile:(long long)arg4 index0:(int)arg5 index1:(int)arg6 index2:(int)arg7 ;
-(void)updateUI;
@end

