/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:56 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSSet, NSConnection;

@interface NSConnectionHelper : NSObject {

	double reqLim;
	double repLim;
	char remoteUsesKeyedDO;
	NSSet* whitelist;
	char useKeyedDO;
	NSConnection* parent;

}
-(void)setWhitelist:(id)arg1 ;
-(id)init;
-(void)finalize;
-(void)dealloc;
@end
