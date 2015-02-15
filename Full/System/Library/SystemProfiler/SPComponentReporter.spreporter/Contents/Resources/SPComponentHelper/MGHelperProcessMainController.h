/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 7:33:25 AM Central European Standard Time
* Operating System: Versie 10.10.2 (build 14C109)
* Image Source: /System/Library/SystemProfiler/SPComponentReporter.spreporter/Contents/Resources/SPComponentHelper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SPComponentHelper/MGHelperProcessMainController.h>

@protocol MGHelperProcessMainController <NSObject>
@required
-(byref id)principalObject;
-(oneway void)exit;

@end


@class NSConnection, NSString;

@interface MGHelperProcessMainController : NSObject <MGHelperProcessMainController> {

	NSConnection* _replyConnection;
	id _principalObject;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)mainControllerWithPrincipalObjectClass:(Class)arg1 replyConnectionName:(id)arg2 ;
-(id)init;
-(id)initWithPrincipalObjectClass:(Class)arg1 replyConnectionName:(id)arg2 ;
-(void)dealloc;
-(void)run;
-(R)principalObject:(SEL)arg1 ;
-(oneway void)exit;
@end
