/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 5:25:10 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBAReaderKit/TSDImageLayout.h>
#import <iBAReaderKit/THWWidgetLayout.h>

@protocol THWWidgetLayoutDelegate;
@interface THImageLayout : TSDImageLayout <THWWidgetLayout> {

	id<THWWidgetLayoutDelegate> _delegate;

}

@property (nonatomic,readonly) char isExpanded; 
@property (assign,nonatomic) id<THWWidgetLayoutDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)layoutGeometryFromProvider;
-(char)isInRoot;
-(char)isIntroMedia;
-(void)setDelegate:(id<THWWidgetLayoutDelegate>)arg1 ;
-(id<THWWidgetLayoutDelegate>)delegate;
-(char)isExpanded;
@end
