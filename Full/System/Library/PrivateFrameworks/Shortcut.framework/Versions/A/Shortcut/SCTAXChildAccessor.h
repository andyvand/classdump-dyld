/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Shortcut.framework/Versions/A/Shortcut
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Shortcut/Shortcut-Structs.h>
#import <Shortcut/NSCoding.h>

@class NSString, NSNumber;

@interface SCTAXChildAccessor : NSObject <NSCoding> {

	NSString* mAttribute;
	NSString* mValue;
	NSNumber* mOccurance;

}
-(AXUIElementRef)resolveFromContainer:(AXUIElementRef)arg1 ;
-(id)initWithParent:(AXUIElementRef)arg1 child:(AXUIElementRef)arg2 ;
-(void)extractSearchAttributeAndValueFromChild:(AXUIElementRef)arg1 ;
-(long long)computeOccuranceIndexForChild:(AXUIElementRef)arg1 forParent:(AXUIElementRef)arg2 ;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)attribute;
-(id)value;
@end

