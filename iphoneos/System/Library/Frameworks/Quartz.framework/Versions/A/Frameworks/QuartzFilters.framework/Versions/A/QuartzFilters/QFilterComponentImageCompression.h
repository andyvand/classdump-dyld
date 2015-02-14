/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/QuartzFilters.framework/Versions/A/QuartzFilters
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuartzFilters/QuartzFilters-Structs.h>
#import <QuartzFilters/QFilterComponent.h>

@class QFilterCellImageCompression, QFilterCellImageJPEGQuality;

@interface QFilterComponentImageCompression : QFilterComponent {

	QFilterCellImageCompression* compressionCell;
	QFilterCellImageJPEGQuality* jpegQualityCell;

}
+(char)isUsedInFilter:(QFilterInfo*)arg1 ;
+(id)newWithFilterInfo:(QFilterInfo*)arg1 upperItem:(id)arg2 ;
-(void)resetOptionsInfo;
-(id)initWithFilterInfo:(QFilterInfo*)arg1 upperItem:(id)arg2 ;
-(void)updateUI;
@end

