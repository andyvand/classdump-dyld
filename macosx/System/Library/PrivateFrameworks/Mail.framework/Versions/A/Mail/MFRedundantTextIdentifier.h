/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:08 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/Mail.framework/Versions/A/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MFRedundantContentMarkup;

@interface MFRedundantTextIdentifier : NSObject {

	MFRedundantContentMarkup* _redundantContentMarkup;

}

@property (nonatomic,readonly) MFRedundantContentMarkup * redundantContentMarkup;              //@synthesize redundantContentMarkup=_redundantContentMarkup - In the implementation block
+(id)_htmlMarkerForContentType:(long long)arg1 ;
+(void)initialize;
-(id)_attachmentContextsByURLforAttachmentsByURL:(id)arg1 ;
-(id)initWithMessage:(id)arg1 parsedMessage:(id)arg2 ancestorMessage:(id)arg3 ancestorParsedMessage:(id)arg4 ;
-(MFRedundantContentMarkup *)redundantContentMarkup;
@end

