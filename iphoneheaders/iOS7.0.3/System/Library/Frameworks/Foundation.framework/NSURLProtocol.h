/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:28:11 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSURLProtocolInternal;

@interface NSURLProtocol : NSObject {

	NSURLProtocolInternal* _internal;

}
+(BOOL)canInitWithRequest:(id)arg1 ;
+(id)canonicalRequestForRequest:(id)arg1 ;
+(BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2 ;
+(Class)_protocolClassForRequest:(id)arg1 allowCF:(BOOL)arg2 ;
+(BOOL)_requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2 allowCF:(BOOL)arg3 ;
+(id)_canonicalRequestForRequest:(id)arg1 allowCF:(BOOL)arg2 ;
+(Class)_protocolClassForRequest:(id)arg1 ;
+(id)_registeredClasses;
+(BOOL)registerClass:(Class)arg1 ;
+(void)unregisterClass:(Class)arg1 ;
+(id)propertyForKey:(id)arg1 inRequest:(id)arg2 ;
+(void)setProperty:(id)arg1 forKey:(id)arg2 inRequest:(id)arg3 ;
+(void)removePropertyForKey:(id)arg1 inRequest:(id)arg2 ;
+(id)_makeRequestCanonicalByMakingRequestURLCanonical:(id)arg1 ;
+(void)_removePropertyForKey:(id)arg1 inRequest:(id)arg2 ;
-(void)_suspendLoading;
-(void)_resumeLoading;
-(void)startLoading;
-(id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3 ;
-(id)cachedResponse;
-(void)_releaseProtocolClientReference;
-(void)dealloc;
-(id)request;
-(void)stopLoading;
-(id)client;
@end
