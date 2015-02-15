/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:13 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Safari/WBSCompletionListItem.h>

@class WBSParsecImageRepresentation, WBSParsecSearchMapsResult, NSString, NSURL;

@interface WBSParsecSearchMapsResultExtraCompletionItem : NSObject <WBSCompletionListItem> {

	WBSParsecImageRepresentation* _icon;
	WBSParsecSearchMapsResult* _mapsResult;
	NSString* _title;
	NSURL* _url;

}

@property (nonatomic,readonly) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                    //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSString * feedbackIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * parsecDomainIdentifier; 
-(NSString *)parsecDomainIdentifier;
-(id)iconWithSession:(id)arg1 ;
-(id)initWithMapsResult:(id)arg1 text:(id)arg2 url:(id)arg3 icon:(id)arg4 ;
-(NSString *)feedbackIdentifier;
-(NSURL *)url;
-(NSString *)title;
@end
