/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:41 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSArrayDetailBinder.h>

@interface NSTreeDetailBinder : NSArrayDetailBinder {

	struct {
		unsigned _reservedTreeDetailBinder : 32;
	}  _treeDetailBinderFlags;

}
+(char)isUsableWithObject:(id)arg1 ;
+(id)binderClassesSuperseded;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)_handlesSelectAll;
-(void)_selectAllContent:(id)arg1 inDetailController:(id)arg2 ;
@end

