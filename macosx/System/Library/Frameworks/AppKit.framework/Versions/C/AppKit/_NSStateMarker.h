/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <AppKit/NSCopying.h>

@class NSMapTable, NSColor;

@interface _NSStateMarker : NSObject <NSCopying> {

	short _type;
	NSMapTable* _placeholderRegistry;
	NSMapTable* _cachedPlaceholderRegistry;
	NSColor* _textColor;
	unsigned long long _placeholderBindingsMask;

}
-(oneway void)release;
-(id)retain;
-(id)autorelease;
-(void)dealloc;
-(id)description;
-(id)valueForKey:(id)arg1 ;
-(id)copy;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(short)_type;
-(void)setDefaultPlaceholder:(id)arg1 forBinding:(id)arg2 onObjectClass:(Class)arg3 ;
-(id)defaultPlaceholderForBinding:(id)arg1 onObjectClass:(Class)arg2 ;
-(void)setDefaultTextColor:(id)arg1 ;
-(id)defaultTextColor;
-(unsigned long long)_hash;
@end

