/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:04 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSKeyValueProxyGetter.h>

@class NSKeyValueGetter, NSKeyValueMutatingCollectionMethodSet;

@interface NSKeyValueFastMutableCollection2Getter : NSKeyValueProxyGetter {

	NSKeyValueGetter* _baseGetter;
	NSKeyValueMutatingCollectionMethodSet* _mutatingMethods;

}
-(id)mutatingMethods;
-(id)initWithContainerClassID:(id)arg1 key:(id)arg2 baseGetter:(id)arg3 mutatingMethods:(id)arg4 proxyClass:(Class)arg5 ;
-(id)baseGetter;
-(void)dealloc;
@end

