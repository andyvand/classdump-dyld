/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:03 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/Versions/A/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSDictionary, NSEnumerator, NSString;

@interface BRContainerBundlePropertyEnumerator : NSEnumerator {

	NSDictionary* _plist;
	NSEnumerator* _enumerator;
	NSString* _propertyKey;
	Class _valueClass;

}
-(id)initWithContainerPlist:(id)arg1 propertyKey:(id)arg2 valuesOfClass:(Class)arg3 ;
-(void)dealloc;
-(id)nextObject;
@end

