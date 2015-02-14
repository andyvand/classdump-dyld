/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:59 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/Versions/A/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMTranscriptChatItem.h>

@class IMHandle, IMServiceImpl;

@interface IMServiceChatItem : IMTranscriptChatItem {

	IMHandle* _handle;
	IMServiceImpl* _service;

}

@property (nonatomic,retain,readonly) IMServiceImpl * service;              //@synthesize service=_service - In the implementation block
@property (nonatomic,retain,readonly) IMHandle * handle;                    //@synthesize handle=_handle - In the implementation block
-(IMHandle *)handle;
-(IMServiceImpl *)service;
-(id)_initWithItem:(id)arg1 service:(id)arg2 handle:(id)arg3 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

