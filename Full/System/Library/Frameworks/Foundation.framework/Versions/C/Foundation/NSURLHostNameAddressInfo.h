/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:05 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@interface NSURLHostNameAddressInfo : NSObject {

	double timestamp;
	addrinfo* addressInfo;

}
+(id)addressInfoForHost:(id)arg1 ;
+(void)asyncResolveWithCallbackClient:(id)arg1 ;
-(id)_initWithAddressInfo:(addrinfo*)arg1 ;
-(addrinfo*)addrinfo;
-(void)finalize;
-(void)dealloc;
-(double)_timestamp;
@end

