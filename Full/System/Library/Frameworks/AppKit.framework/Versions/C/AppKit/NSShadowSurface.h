/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:32 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSSurface.h>

@interface NSShadowSurface : NSSurface {

	int _height;
	char* _fill;
	char _isHorizontal;

}
-(void)finalize;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithView:(id)arg1 height:(long long)arg2 fill:(const char*)arg3 isHorizontal:(char)arg4 ;
-(id)initWithView:(id)arg1 height:(long long)arg2 fill:(const char*)arg3 ;
@end

