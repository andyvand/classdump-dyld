/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:44 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/CoreServices/Applications/Feedback Assistant.app/Contents/MacOS/Feedback Assistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Feedback Assistant/Feedback Assistant-Structs.h>
@interface FBANetworkUtilities : NSObject
+(id)configuredVPNMethods;
+(int)currentlyActiveInterface;
+(id)descriptionForInterface:(int)arg1 ;
+(char)isConnected;
-(id)addressForService:(SCNetworkServiceRef)arg1 ;
-(id)dynamicDictionaryForService:(SCNetworkServiceRef)arg1 andEntity:(CFStringRef)arg2 ;
-(char)isLinkLocalAddress:(id)arg1 ;
-(char)isLoopBackAddress:(id)arg1 ;
-(id)ipv4AddressForService:(SCNetworkServiceRef)arg1 andProtocol:(SCNetworkProtocolRef)arg2 ;
-(id)ipv6AddressForService:(SCNetworkServiceRef)arg1 andProtocol:(SCNetworkProtocolRef)arg2 ;
-(id)init;
@end

