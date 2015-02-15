/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:45 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/WebKit.framework/Versions/A/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <CoreFoundation/NSDictionary.h>
#import <WebKit/WKObject.h>

@class NSString;

@interface WKNSDictionary : NSDictionary <WKObject> {

	ObjectStorage<WebKit::ImmutableDictionary> _dictionary;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
-(Object*)_apiObject;
-(void)dealloc;
-(unsigned long long)count;
-(id)objectForKey:(id)arg1 ;
-(id)keyEnumerator;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3 ;
@end

