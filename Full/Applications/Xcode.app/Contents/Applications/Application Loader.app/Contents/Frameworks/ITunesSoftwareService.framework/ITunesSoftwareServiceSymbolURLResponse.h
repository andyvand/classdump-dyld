/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:15:43 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Xcode.app/Contents/Applications/Application Loader.app/Contents/Frameworks/ITunesSoftwareService.framework/ITunesSoftwareService
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ITunesSoftwareService/ITunesSoftwareServiceResponse.h>
#import <ITunesSoftwareService/ITunesSoftwareServiceSymbolURLResponse.h>

@protocol ITunesSoftwareServiceSymbolURLResponse <ITunesSoftwareServiceResponse>
@required
-(id)urls;

@end


@class NSDictionary;

@interface ITunesSoftwareServiceSymbolURLResponse : ITunesSoftwareServiceResponse <ITunesSoftwareServiceSymbolURLResponse> {

	NSDictionary* _urls;

}

@property (nonatomic,retain) NSDictionary * urls;              //@synthesize urls=_urls - In the implementation block
-(void)setUrls:(NSDictionary *)arg1 ;
-(NSDictionary *)urls;
@end
