/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:23 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSView.h>

@class IKImageEditPanel;

@interface IKImageEditView : NSView {

	id _dataSource;
	IKImageEditPanel* _imageEditPanel;
	char _dataSourceIsIKImageView;

}

@property (assign) IKImageEditPanel * imageEditPanel;              //@synthesize imageEditPanel=_imageEditPanel - In the implementation block
@property (assign) id dataSource;                                  //@synthesize dataSource=_dataSource - In the implementation block
@property (assign) char dataSourceIsIKImageView;                   //@synthesize dataSourceIsIKImageView=_dataSourceIsIKImageView - In the implementation block
+(id)sharedImageEditView;
-(IKImageEditPanel *)imageEditPanel;
-(void)dataSourceDidChange;
-(void)viewWillBecomeActive;
-(void)viewWillBecomeInActive;
-(void)setImageEditPanel:(IKImageEditPanel *)arg1 ;
-(void)setDataSourceIsIKImageView:(char)arg1 ;
-(void)setDataSource:(id)arg1 imageEditPanel:(id)arg2 ;
-(char)dataSourceIsIKImageView;
-(void)setDataSource:(id)arg1 ;
-(id)dataSource;
@end

