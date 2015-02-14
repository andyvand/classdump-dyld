/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSDictionary.h>

@class NSObject;

@interface NSKeyValueChangeDictionary : NSDictionary {

	SCD_Struct_NS89 _details;
	NSObject* _originalObservable;
	char _isPriorNotification;
	char _isRetainingObjects;

}
-(void)setOriginalObservable:(id)arg1 ;
-(void)setDetailsNoCopy:(SCD_Struct_NS90)arg1 originalObservable:(id)arg2 ;
-(id)initWithDetailsNoCopy:(SCD_Struct_NS90)arg1 originalObservable:(id)arg2 isPriorNotification:(char)arg3 ;
-(void)retainObjects;
-(void)dealloc;
-(unsigned long long)count;
-(id)objectForKey:(id)arg1 ;
-(id)keyEnumerator;
@end

