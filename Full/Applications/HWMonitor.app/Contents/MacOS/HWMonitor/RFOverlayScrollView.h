/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:11:03 AM Central European Standard Time
* Operating System: Versie 10.10.2 (build 14C109)
* Image Source: /Applications/HWMonitor.app/Contents/MacOS/HWMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <HWMonitor/HWMonitor-Structs.h>
#import <AppKit/NSScrollView.h>

@interface RFOverlayScrollView : NSScrollView {

	long long _headerOffset;

}

@property (assign,nonatomic) long long headerOffset;              //@synthesize headerOffset=_headerOffset - In the implementation block
-(long long)tableHeaderOffsetFromSuperview;
-(long long)headerOffset;
-(void)setHeaderOffset:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)tile;
-(void)awakeFromNib;
@end

