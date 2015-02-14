/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:53 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/Versions/A/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVActionBackedTask.h>

@class NSSet, CoreDAVResponseItem, NSURL;

@interface CoreDAVPropPatchTask : CoreDAVActionBackedTask {

	NSSet* _propPatchRemoveElements;
	NSSet* _propPatchSetElements;
	CoreDAVResponseItem* _responseItem;
	char _sendOrder;
	int _absoluteOrder;
	NSURL* _priorOrderedURL;

}

@property (assign,nonatomic) id<CoreDAVPropPatchTaskDelegate> delegate; 
@property (nonatomic,retain) NSURL * priorOrderedURL;                                //@synthesize priorOrderedURL=_priorOrderedURL - In the implementation block
@property (assign,nonatomic) int absoluteOrder;                                      //@synthesize absoluteOrder=_absoluteOrder - In the implementation block
@property (nonatomic,retain) CoreDAVResponseItem * responseItem;                     //@synthesize responseItem=_responseItem - In the implementation block
@property (nonatomic,retain) NSSet * propPatchRemoveElements;                        //@synthesize propPatchRemoveElements=_propPatchRemoveElements - In the implementation block
@property (nonatomic,retain) NSSet * propPatchSetElements;                           //@synthesize propPatchSetElements=_propPatchSetElements - In the implementation block
-(void)dealloc;
-(id)description;
-(id)initWithURL:(id)arg1 ;
-(id)additionalHeaderValues;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)initWithPropertiesToSet:(id)arg1 andRemove:(id)arg2 atURL:(id)arg3 ;
-(id)copyDefaultParserForContentType:(id)arg1 ;
-(int)absoluteOrder;
-(id)httpMethod;
-(id)requestBody;
-(void)setAbsoluteOrder:(int)arg1 ;
-(void)setPriorOrderedURL:(NSURL *)arg1 ;
-(NSURL *)priorOrderedURL;
-(NSSet *)propPatchSetElements;
-(NSSet *)propPatchRemoveElements;
-(void)setResponseItem:(CoreDAVResponseItem *)arg1 ;
-(CoreDAVResponseItem *)responseItem;
-(void)setPropPatchRemoveElements:(NSSet *)arg1 ;
-(void)setPropPatchSetElements:(NSSet *)arg1 ;
@end

