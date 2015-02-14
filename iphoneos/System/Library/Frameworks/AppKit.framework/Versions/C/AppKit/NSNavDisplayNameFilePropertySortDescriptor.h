/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:14 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSNavFilePropertySortDescriptor.h>

@class NSSavePanel;

@interface NSNavDisplayNameFilePropertySortDescriptor : NSNavFilePropertySortDescriptor {

	NSSavePanel* _panel;
	char _caseSensitive;

}
-(long long)compareObject:(id)arg1 toObject:(id)arg2 ;
-(id)initWithPanel:(id)arg1 caseSensitive:(char)arg2 ascending:(char)arg3 selector:(SEL)arg4 ;
-(long long)compareObjectValue:(id)arg1 toObjectValue:(id)arg2 ;
@end

