/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:21 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <AppKit/NSButtonCell.h>

@interface FI_TButtonCell : NSButtonCell {

	char _acceptsFirstMouse;

}

@property (assign) char acceptsFirstMouse;              //@synthesize acceptsFirstMouse=_acceptsFirstMouse - In the implementation block
-(void)setAcceptsFirstMouse:(char)arg1 ;
-(char)acceptsFirstMouse;
-(void)initCommon;
-(char)acceptsFirstMouseFE_FI:(id)arg1 inRect:(CGRect)arg2 ofView:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initTextCell:(id)arg1 ;
-(id)initImageCell:(id)arg1 ;
-(long long)nextState;
@end

