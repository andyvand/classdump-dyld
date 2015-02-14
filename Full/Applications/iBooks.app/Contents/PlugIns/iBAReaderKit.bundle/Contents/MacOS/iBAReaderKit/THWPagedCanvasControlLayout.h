/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:17:28 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/iBooks.app/Contents/PlugIns/iBAReaderKit.bundle/Contents/MacOS/iBAReaderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iBAReaderKit/THWControlLayout.h>

@protocol THWPagedCanvasControlLayoutDelegate;
@interface THWPagedCanvasControlLayout : THWControlLayout {

	id<THWPagedCanvasControlLayoutDelegate> _delegate;

}

@property (assign,nonatomic) id<THWPagedCanvasControlLayoutDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(Class)repClassOverride;
-(void)setDelegate:(id<THWPagedCanvasControlLayoutDelegate>)arg1 ;
-(id<THWPagedCanvasControlLayoutDelegate>)delegate;
-(void)validate;
@end

