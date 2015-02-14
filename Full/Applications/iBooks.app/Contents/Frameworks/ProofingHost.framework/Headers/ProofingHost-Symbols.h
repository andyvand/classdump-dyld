+[PRHostSession setUseSimulatedATCHostConnection:]
+[PRHostSession hostVersion]
+[PRHostSession minClientVersion]
-[PRHostSession initWithDevice:]
-[PRHostSession dealloc]
-[PRHostSession device]
-[PRHostSession proofingSupportedByOS]
-[PRHostSession iBooksBundleInfo]
-[PRHostSession iBooksBundleVersion]
-[PRHostSession iBooksInstalled]
-[PRHostSession checkProofingPreReqs]
-[PRHostSession startSession]
-[PRHostSession stopSession]
-[PRHostSession sessionStarted]
-[PRHostSession startSyncWithManifest:assetSrcRootPath:]
-[PRHostSession startSyncWithManifest:assetSrcRootPath:renamingAssetTo:]
-[PRHostSession cancelSync]
-[PRHostSession hostConnection:didReceiveMessage:]
-[PRHostSession _stopSyncWithReason:cancelScheduledOperations:]
-[PRHostSession _syncStoppedWithReason:]
-[PRHostSession _handleATCMessage:]
-[PRHostSession _handleATCMessageSyncAllowed:]
-[PRHostSession _handleATCMessageSyncFailed:]
-[PRHostSession _handleATCMessageReadyForSync:]
___47-[PRHostSession _handleATCMessageReadyForSync:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[PRHostSession _handleATCMessageAssetManifest:]
___48-[PRHostSession _handleATCMessageAssetManifest:]_block_invoke
___copy_helper_block_255
___destroy_helper_block_256
-[PRHostSession _handleATCMessageSyncFinished:]
-[PRHostSession _queueCopyAssets:toRoot:]
___Block_byref_object_copy_
___Block_byref_object_dispose_
___41-[PRHostSession _queueCopyAssets:toRoot:]_block_invoke
___copy_helper_block_295
___destroy_helper_block_296
___41-[PRHostSession _queueCopyAssets:toRoot:]_block_invoke299
___copy_helper_block_310
___destroy_helper_block_311
___41-[PRHostSession _queueCopyAssets:toRoot:]_block_invoke314
___copy_helper_block_323
___destroy_helper_block_324
-[PRHostSession delegate]
-[PRHostSession setDelegate:]
-[PRHostSession syncAllowed]
-[PRHostSession setSyncAllowed:]
-[PRHostSession syncState]
-[PRHostSession setSyncState:]
-[PRHostSession syncProgress]
-[PRHostSession setSyncProgress:]
-[PRHostSession assetDestRename]
-[PRHostSession setAssetDestRename:]
-[PRHostSession assetSrcRootPath]
-[PRHostSession setAssetSrcRootPath:]
-[PRHostSession hostManifest]
-[PRHostSession setHostManifest:]
-[PRHostSession clientManifest]
-[PRHostSession setClientManifest:]
-[PRHostSession cancellingSync]
-[PRHostSession setCancellingSync:]
-[PRHostSession hostConnection]
-[PRHostSession setHostConnection:]
-[PRHostSession afcSession]
-[PRHostSession setAfcSession:]
-[PRHostSession assetID2Asset]
-[PRHostSession setAssetID2Asset:]
-[PRATCHostConnection initWithDevice:]
-[PRATCHostConnection dealloc]
-[PRATCHostConnection connected]
-[PRATCHostConnection connect]
-[PRATCHostConnection disconnect]
-[PRATCHostConnection sendSyncRequestWithDataClasses:anchors:hostInfo:]
-[PRATCHostConnection sendMetadataSyncFinishedWithSyncTypes:newAnchors:]
-[PRATCHostConnection sendAssetCompletedWithAssetIdentifier:dataClass:assetPath:]
-[PRATCHostConnection sendFileProgressWithAssetIdentifier:dataClass:progress:overallProgress:]
-[PRATCHostConnection sendFileErrorWithAssetIdentifier:dataClass:errorCode:]
-[PRATCHostConnection sendSyncFailedWithErrorCode:]
-[PRATCHostConnection sendPing]
-[PRATCHostConnection sendMessage:]
-[PRATCHostConnection _readMessageThreadEntry]
-[PRATCHostConnection device]
-[PRATCHostConnection delegate]
-[PRATCHostConnection setDelegate:]
+[PRAMDSession sharedInstance]
-[PRAMDSession init]
-[PRAMDSession dealloc]
-[PRAMDSession install]
-[PRAMDSession installWithConnectionType:]
_AMDNotificationCallback
-[PRAMDSession uninstall]
-[PRAMDSession devices]
-[PRAMDSession _amdNotificationCallback:]
-[PRAMDSession delegate]
-[PRAMDSession setDelegate:]
-[PRAFCSession initWithDevice:]
-[PRAFCSession dealloc]
-[PRAFCSession startSession]
_afcConnectionCallBack
-[PRAFCSession stopSession]
-[PRAFCSession cancelScheduledOperationsWithCompletion:]
___56-[PRAFCSession cancelScheduledOperationsWithCompletion:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
___56-[PRAFCSession cancelScheduledOperationsWithCompletion:]_block_invoke40
___copy_helper_block_41
___destroy_helper_block_42
-[PRAFCSession scheduleWritePList:format:path:willBegin:completion:]
-[PRAFCSession scheduleReadPListAtPath:mutabilityOptions:willBegin:completion:]
___79-[PRAFCSession scheduleReadPListAtPath:mutabilityOptions:willBegin:completion:]_block_invoke
___copy_helper_block_62
___destroy_helper_block_63
-[PRAFCSession scheduleWriteData:path:willBegin:completion:]
___60-[PRAFCSession scheduleWriteData:path:willBegin:completion:]_block_invoke
___copy_helper_block_82
___destroy_helper_block_83
-[PRAFCSession scheduleReadDataAtPath:willBegin:completion:]
___60-[PRAFCSession scheduleReadDataAtPath:willBegin:completion:]_block_invoke
___copy_helper_block_101
___destroy_helper_block_102
-[PRAFCSession scheduleCopyFileAtSrcHostPath:toDstClientPath:willBegin:progress:completion:]
___92-[PRAFCSession scheduleCopyFileAtSrcHostPath:toDstClientPath:willBegin:progress:completion:]_block_invoke
___92-[PRAFCSession scheduleCopyFileAtSrcHostPath:toDstClientPath:willBegin:progress:completion:]_block_invoke_2
___copy_helper_block_120
___destroy_helper_block_121
___copy_helper_block_132
___destroy_helper_block_133
-[PRAFCSession cancelPending]
+[PRAsset simpleContentsHashForFileAtPath:]
+[PRAsset pathRootName:]
+[PRAsset path:renamingRootTo:]
+[PRAsset assetForPath:modifyType:contentsHash:]
+[PRAsset assetFromDictionary:]
-[PRAsset init]
-[PRAsset dealloc]
-[PRAsset description]
-[PRAsset assetID]
-[PRAsset dictionaryRepresentation]
-[PRAsset dictionaryRepresentationRenamingRootTo:]
-[PRAsset path]
-[PRAsset setPath:]
-[PRAsset modifyType]
-[PRAsset setModifyType:]
-[PRAsset contentsHash]
-[PRAsset setContentsHash:]
-[NSString(PRAssetAdditions) pr_md5Digest]
-[PRManifestContainer init]
-[PRManifestContainer initWithDictionary:]
___42-[PRManifestContainer initWithDictionary:]_block_invoke
___copy_helper_block_
___destroy_helper_block_
-[PRManifestContainer dealloc]
-[PRManifestContainer dictionaryRep]
-[PRManifestContainer dictionaryRepRenamingRootTo:]
___51-[PRManifestContainer dictionaryRepRenamingRootTo:]_block_invoke
___copy_helper_block_65
___destroy_helper_block_66
-[PRManifestContainer containerVersion]
-[PRManifestContainer setContainerVersion:]
-[PRManifestContainer syncType]
-[PRManifestContainer setSyncType:]
-[PRManifestContainer metadata]
-[PRManifestContainer setMetadata:]
-[PRManifestContainer manifest]
-[PRManifestContainer setManifest:]
+[ATAsset downloadAssetWithIdentifier:dataclass:prettyName:]
-[ATAsset dealloc]
-[ATAsset identifier]
-[ATAsset setIdentifier:]
-[ATAsset dataclass]
-[ATAsset setDataclass:]
-[ATAsset prettyName]
-[ATAsset setPrettyName:]
-[PPSignalLock init]
-[PPSignalLock dealloc]
-[PPSignalLock wait]
-[PPSignalLock waitUntilDate:]
-[PPSignalLock signal]
GCC_except_table10
GCC_except_table32
GCC_except_table13
-[NSString(PRAssetAdditions) pr_md5Digest].hexDigits
___block_descriptor_tmp
___block_descriptor_tmp258
___block_descriptor_tmp298
___block_descriptor_tmp313
___block_descriptor_tmp325
___block_descriptor_tmp
___block_descriptor_tmp43
___block_descriptor_tmp65
___block_descriptor_tmp84
___block_descriptor_tmp103
___block_descriptor_tmp123
___block_descriptor_tmp134
___block_descriptor_tmp
___block_descriptor_tmp67
_OBJC_IVAR_$_PRHostSession._delegate
_OBJC_IVAR_$_PRHostSession._syncAllowed
_OBJC_IVAR_$_PRHostSession._syncState
_OBJC_IVAR_$_PRHostSession._syncProgress
_OBJC_IVAR_$_PRHostSession._assetDestRename
_OBJC_IVAR_$_PRHostSession._assetSrcRootPath
_OBJC_IVAR_$_PRHostSession._hostManifest
_OBJC_IVAR_$_PRHostSession._clientManifest
_OBJC_IVAR_$_PRHostSession._cancellingSync
_OBJC_IVAR_$_PRHostSession._hostConnection
_OBJC_IVAR_$_PRHostSession._afcSession
_OBJC_IVAR_$_PRHostSession._assetID2Asset
_OBJC_IVAR_$_PRATCHostConnection._device
_OBJC_IVAR_$_PRATCHostConnection._deviceIdentifier
_OBJC_IVAR_$_PRATCHostConnection._hostConnectionRef
_OBJC_IVAR_$_PRATCHostConnection._readMessageThreadDone
_OBJC_IVAR_$_PRATCHostConnection._readMessageThread
_OBJC_IVAR_$_PRATCHostConnection._delegate
_OBJC_IVAR_$_PRAMDSession._deviceNotificationRef
_OBJC_IVAR_$_PRAMDSession._delegate
_OBJC_IVAR_$_PRAFCSession._device
_OBJC_IVAR_$_PRAFCSession._amdDeviceConnected
_OBJC_IVAR_$_PRAFCSession._amdSessionStarted
_OBJC_IVAR_$_PRAFCSession._amdServiceConnection
_OBJC_IVAR_$_PRAFCSession._afcConnection
_OBJC_IVAR_$_PRAFCSession._afcOpQueue
_OBJC_IVAR_$_PRAFCSession._cancelPending
_OBJC_IVAR_$_PRAsset._assetID
_OBJC_IVAR_$_PRAsset._path
_OBJC_IVAR_$_PRAsset._modifyType
_OBJC_IVAR_$_PRAsset._contentsHash
_OBJC_IVAR_$_PRManifestContainer._containerVersion
_OBJC_IVAR_$_PRManifestContainer._syncType
_OBJC_IVAR_$_PRManifestContainer._metadata
_OBJC_IVAR_$_PRManifestContainer._manifest
_OBJC_IVAR_$_PPSignalLock._lock
+[PRAMDSession sharedInstance].sharedInstance
+[PRAsset simpleContentsHashForFileAtPath:].sFileManager
_OBJC_CLASS_$_ATAsset
_OBJC_CLASS_$_PPSignalLock
_OBJC_CLASS_$_PRAFCSession
_OBJC_CLASS_$_PRAMDSession
_OBJC_CLASS_$_PRATCHostConnection
_OBJC_CLASS_$_PRAsset
_OBJC_CLASS_$_PRHostSession
_OBJC_CLASS_$_PRManifestContainer
_OBJC_IVAR_$_ATAsset._dataclass
_OBJC_IVAR_$_ATAsset._identifier
_OBJC_IVAR_$_ATAsset._prettyName
_OBJC_METACLASS_$_ATAsset
_OBJC_METACLASS_$_PPSignalLock
_OBJC_METACLASS_$_PRAFCSession
_OBJC_METACLASS_$_PRAMDSession
_OBJC_METACLASS_$_PRATCHostConnection
_OBJC_METACLASS_$_PRAsset
_OBJC_METACLASS_$_PRHostSession
_OBJC_METACLASS_$_PRManifestContainer
_useSimulatedATCHostConnection
_AFCConnectionClose
_AFCConnectionCreate
_AFCConnectionScheduleWithRunLoop
_AFCConnectionSetCallBack
_AFCConnectionSubmitOperation
_AFCConnectionUnscheduleFromRunLoop
_AFCDirectoryCreate
_AFCFileInfoOpen
_AFCFileRefClose
_AFCFileRefOpen
_AFCFileRefRead
_AFCFileRefWrite
_AFCKeyValueClose
_AFCKeyValueRead
_AFCOperationCreateSetModTime
_AFCOperationGetContext
_AFCOperationGetTypeID
_AMDCopyArrayOfDevicesMatchingQuery
_AMDServiceConnectionGetSocket
_AMDeviceConnect
_AMDeviceCopyDeviceIdentifier
_AMDeviceCopyValue
_AMDeviceDisconnect
_AMDeviceLookupApplications
_AMDeviceNotificationSubscribe
_AMDeviceNotificationUnsubscribe
_AMDeviceSecureStartService
_AMDeviceStartSession
_AMDeviceStopSession
_ATCFMessageCreate
_ATCFMessageGetName
_ATCFMessageGetParam
_ATHostConnectionCreate
_ATHostConnectionDestroy
_ATHostConnectionReadMessage
_ATHostConnectionSendAssetCompleted
_ATHostConnectionSendFileError
_ATHostConnectionSendFileProgress
_ATHostConnectionSendMessage
_ATHostConnectionSendMetadataSyncFinished
_ATHostConnectionSendPing
_ATHostConnectionSendSyncFailed
_ATHostConnectionSendSyncRequest
_CC_MD5_Final
_CC_MD5_Init
_CC_MD5_Update
_CFBooleanGetValue
_CFGetTypeID
_CFRelease
_CFRetain
_NSLog
_NSRunLoopCommonModes
_OBJC_CLASS_$_NSArray
_OBJC_CLASS_$_NSAssertionHandler
_OBJC_CLASS_$_NSAutoreleasePool
_OBJC_CLASS_$_NSCondition
_OBJC_CLASS_$_NSConditionLock
_OBJC_CLASS_$_NSDate
_OBJC_CLASS_$_NSDictionary
_OBJC_CLASS_$_NSFileManager
_OBJC_CLASS_$_NSMutableArray
_OBJC_CLASS_$_NSMutableData
_OBJC_CLASS_$_NSMutableDictionary
_OBJC_CLASS_$_NSNumber
_OBJC_CLASS_$_NSObject
_OBJC_CLASS_$_NSPropertyListSerialization
_OBJC_CLASS_$_NSRunLoop
_OBJC_CLASS_$_NSString
_OBJC_CLASS_$_NSThread
_OBJC_METACLASS_$_NSObject
__Block_object_assign
__Block_object_dispose
__NSConcreteStackBlock
__Unwind_Resume
___CFConstantStringClassReference
___error
___objc_personality_v0
___stack_chk_fail
___stack_chk_guard
__objc_empty_cache
_atoi
_close
_dispatch_async
_dispatch_queue_create
_dispatch_release
_free
_fstat$INODE64
_kCFAllocatorDefault
_kCFBundleIdentifierKey
_malloc
_objc_enumerationMutation
_objc_msgSend
_objc_msgSendSuper2
_objc_setProperty_nonatomic
_objc_sync_enter
_objc_sync_exit
_open
_read
_strcmp
_strerror
dyld_stub_binder
