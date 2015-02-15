_main
_PTPReadDeviceInfoPlist
_PTPCleanup
_PTPOpenUSBDevice
-[PTPInitiator initWithHostLocationID:]
-[PTPHostUSBTransport initWithLocationID:delegate:]
-[PTPTransport init]
-[PTPInitiator start]
-[PTPHostUSBTransport startInitiator]
-[PTPTransport startInitiator]
-[PTPTransport startCallbackThread]
-[PTPTransport lockCallbackThreadMutex]
-[PTPTransport waitForCallbackThreadConditionSignalWithTimeout:]
___StaticCallbackThreadFunction
-[PTPTransport callbackThreadFunction]
-[PTPTransport signalCallbackThreadCondition]
-[PTPTransport unlockCallbackThreadMutex]
-[PTPTransport callbackThreadRunLoop]
-[PTPHostUSBTransport readInterruptData]
-[PTPTransport type]
-[PTPHostUSBTransport vendorID]
-[PTPInitiator setDeviceVendorID:]
-[PTPHostUSBTransport productID]
-[PTPInitiator setDeviceProductID:]
-[PTPHostUSBTransport usbSerialNumberString]
-[PTPInitiator setDeviceSerialNumberString:]
-[PTPInitiator deviceSerialNumberString]
-[PTPInitiator setUUIDString:]
-[PTPInitiator setPersistentIDString:]
-[PTPInitiator deviceInfo]
-[PTPOperationRequestPacket initWithOperationCode:transactionID:dataPhaseInfo:]
-[PTPWrappedBytes initWithCapacity64:]
-[PTPInitiator sendRequest:andReceiveData:excessReceivedDataSize:timeout:]
-[PTPInitiator sendRequest:andReceiveData:maxDataSize:excessReceivedDataSize:timeout:]
-[PTPOperationRequestPacket description]
_stringForOperationCode
-[PTPOperationRequestPacket operationCode]
-[PTPHostUSBTransport sendRequest:receiveData:timeout:]
-[PTPTransport setResponseReceived:]
-[PTPOperationRequestPacket contentForUSBUsingBuffer:capacity:]
+[PTPWrappedBytes wrappedBytesWithBytes:capacity64:]
-[PTPWrappedBytes initWithBytes:capacity64:]
_WriteUInt32
_WriteUInt16
-[PTPWrappedBytes setLength64:]
-[PTPHostUSBTransport writeBulkData:]
-[PTPWrappedBytes length64]
-[PTPWrappedBytes bytes]
-[PTPHostUSBTransport readBulkDataWithTimeout:]
-[PTPTransport responseReceived]
__StaticBulkInDataAvailable
-[PTPHostUSBTransport handleBulkData:result:]
-[PTPWrappedBytes appendBytes:length64:]
-[PTPOperationResponsePacket initWithUSBBuffer:]
_ReadUInt16
_ReadUInt32
-[PTPTransport setResponse:]
-[PTPOperationResponsePacket description]
_stringForResponseCode
-[PTPOperationResponsePacket responseCode]
-[PTPWrappedBytes mutableBytes]
-[PTPDeviceInfoDataset initWithMutableData:]
-[PTPDeviceInfoDataset setContent:]
_CopyUnicodeStringWithLengthByteFromBuffer
_CopyArrayOfUnsignedShortsFromBuffer
-[PTPWrappedBytes dealloc]
-[PTPDeviceInfoDataset description]
_stringForEventCode
_stringForObjectFormatCode
-[PTPInitiator openSession]
-[PTPOperationRequestPacket initWithOperationCode:transactionID:dataPhaseInfo:parameter1:]
-[PTPInitiator sendRequest:excessReceivedDataSize:timeout:]
__StaticInterruptInDataAvailable
-[PTPHostUSBTransport handleInterruptData:]
-[PTPEventPacket initWithUSBBuffer:]
-[PTPDeviceInfoDataset model]
-[PTPInitiator locked]
-[PTPDeviceInfoDataset operationsSupported]
-[PTPInitiator primeStorages]
-[PTPInitiator storageIDs]
_CopyArrayOfHandlesFromBuffer
-[PTPDeviceInfoDataset vendorExtensionID]
-[PTPCameraStorage initWithStorageID:initiator:]
-[PTPContainer initWithStorageID:objHandle:parent:initiator:]
-[PTPCameraItem initWithStorageID:objHandle:parent:initiator:]
-[PTPCameraItem setType:]
-[PTPInitiator storageInfo:]
-[PTPStorageInfoDataset initWithMutableData:]
-[PTPStorageInfoDataset setContent:]
_ReadUInt64
-[PTPCameraItem setInfo:]
-[PTPCameraStorage prime]
-[PTPCameraItem path]
-[PTPCameraItem initiator]
-[PTPDeviceInfoDataset standardVersion]
-[PTPInitiator deviceVendorID]
-[PTPCameraItem storageID]
-[PTPInitiator objectInfosForObjectsInStorage64:objectFormatCode:association:]
-[PTPOperationRequestPacket initWithOperationCode:transactionID:dataPhaseInfo:parameter1:parameter2:parameter3:]
-[PTPObjectInfoDataset setObjectHandle:]
-[PTPInitiator isAccessRestrictedAppleDevice]
-[PTPOperationResponsePacket numParameters]
-[PTPOperationResponsePacket parameter1]
-[PTPCameraStorage setEstimatedNumOfDownloadableObjects:]
-[PTPOperationResponsePacket parameter2]
-[PTPCameraStorage setNumOfDownloadableObjectsPlusFolders:]
-[PTPOperationResponsePacket parameter3]
-[PTPOperationResponsePacket parameter4]
-[PTPOperationResponsePacket parameter5]
-[PTPInitiator refreshAssignedDeviceName]
-[PTPInitiator setUserAssignedDeviceName:]
-[PTPInitiator deviceIsDummyPTPDevice]
_PTPAddPropertiesToCFDictionary
-[PTPInitiator initiator]
-[PTPDeviceInfoDataset eventsSupported]
-[PTPInitiator deviceProductID]
-[PTPInitiator estimatedNumOfDownloadableObjects]
-[PTPCameraStorage estimatedNumOfDownloadableObjects]
-[PTPInitiator deviceIsPasscodeLocked]
-[PTPInitiator deviceIsPairedWithThisHost]
-[PTPInitiator timeOffset]
-[PTPInitiator deviceDateTime]
-[PTPDeviceInfoDataset devicePropertiesSupported]
-[PTPInitiator userAssignedDeviceName]
-[PTPInitiator numOfDownloadableObjects]
-[PTPCameraStorage numOfDownloadableObjects]
-[PTPInitiator contentCatalogPercentCompleted]
-[PTPInitiator catalogingDone]
-[PTPInitiator handleEvent:]
-[PTPEventPacket description]
-[PTPInitiator processUnhandledEvents]
-[PTPInitiator transport]
-[PTPHostUSBTransport connected]
_PTPGetObjectInfo
-[PTPInitiator setICADeviceObjectInfo:]
-[PTPInitiator storages]
-[PTPCameraItem setIcaObjInfo:]
-[PTPContainer numItems:]
-[PTPCameraStorage locked]
-[PTPCameraItem info]
-[PTPStorageInfoDataset accessCapability]
-[PTPContainer readContentWithNotificationTime:]
-[PTPInitiator requestPending]
-[PTPCameraItem type]
-[PTPCameraStorage tempArrayOfAllObjectHandles]
-[PTPInitiator ICADeviceObjectInfo]
-[PTPObjectInfoDataset parentObject]
-[PTPObjectInfoDataset objectFormat]
-[PTPObjectInfoDataset associationType]
-[PTPObjectInfoDataset objectHandle]
-[PTPCameraFolder initWithStorageID:objHandle:parent:initiator:]
-[PTPCameraItem icaObjInfo]
-[PTPContainer content]
-[PTPObjectInfoDataset filename]
-[PTPCameraItem locked]
-[PTPCameraItem storage]
-[PTPInitiator storageForStorageID:]
-[PTPObjectInfoDataset protectionStatus]
-[PTPContainer itemForObjectHandle:]
-[PTPCameraFile initWithStorageID:objHandle:parent:initiator:]
-[PTPObjectInfoDataset captureDate]
-[PTPObjectInfoDataset modificationDate]
-[PTPObjectInfoDataset objectCompressedSize]
-[PTPObjectInfoDataset imagePixWidth]
-[PTPObjectInfoDataset imagePixHeight]
-[PTPObjectInfoDataset objectCompressedSize64]
-[PTPCameraItem isInLocalCache]
-[PTPObjectInfoDataset thumbCompressedSize]
-[PTPCameraStorage incrementNumOfDownloadableObjects:]
-[PTPObjectInfoDataset thumbFormat]
_PTPPeriodicTask
-[PTPCameraStorage setCatalogingDone:]
-[PTPInitiator updateCatalogingDone]
-[PTPCameraStorage catalogingDone]
-[PTPInitiator setCatalogingDone:]
_PTPReadFileData
-[PTPInitiator thumbDataFromFile:maxSize:actualSize:useBuffer:]
-[PTPCameraItem objHandle]
-[PTPInitiator partialDataFromFile:fromOffset:maxSize:actualSize:useBuffer:]
-[PTPEventPacket eventCode]
-[PTPCameraItem metadata]
-[PTPObjectInfoDataset keywords]
_PTPWriteDataToFileDescriptor64
-[PTPWrappedBytes initWithFileDescriptor:capacity64:]
-[PTPWrappedBytes setProgressNotifierCallback:context:]
-[PTPInitiator saveFile:to:]
-[PTPInitiator savePartialFile:fromOffset:size:to:]
-[PTPWrappedBytes offset]
-[PTPWrappedBytes percentFull]
_PTPDownloadProgressNotifier
_PTPSendMessage
-[PTPInitiator transactionID]
-[PTPInitiator issueCancelRequest:]
-[PTPHostUSBTransport cancelRequest:]
-[PTPCameraItem parent]
-[PTPCameraStorage decrementNumOfDownloadableObjects:]
-[PTPCameraStorage decrementEstimatedNumOfDownloadableObjects:]
-[PTPCameraItem dealloc]
-[PTPObjectInfoDataset dealloc]
-[PTPContainer dealloc]
_PTPCloseDevice
-[PTPInitiator stop]
-[PTPInitiator closeSession]
-[PTPHostUSBTransport stop]
-[PTPTransport stop]
-[PTPTransport endCallbackThread]
___StaticCallbackThreadCleanupHandler
-[PTPTransport cleanupCallbackThread]
-[PTPHostUSBTransport locationID]
-[PTPInitiator dealloc]
-[PTPTransport setDelegate:]
-[PTPCameraStorage dealloc]
-[PTPStorageInfoDataset dealloc]
-[PTPDeviceInfoDataset dealloc]
-[PTPHostUSBTransport abortPendingIO]
-[PTPInitiator cleanupCache]
_stringForDevicePropCode
-[PTPDeviceInfoDataset vendorExtensionVersion]
-[PTPStorageInfoDataset init]
-[PTPCameraItem setPath:]
-[PTPStorageInfoDataset setStorageType:]
-[PTPStorageInfoDataset setFilesystemType:]
-[PTPStorageInfoDataset setAccessCapability:]
-[PTPStorageInfoDataset setMaxCapacity:]
-[PTPStorageInfoDataset setFreeSpaceInBytes:]
-[PTPStorageInfoDataset setFreeSpaceInImages:]
-[PTPStorageInfoDataset setStorageDescription:]
-[PTPStorageInfoDataset setVolumeLabel:]
-[PTPCameraStorage setNumOfDownloadableObjects:]
-[PTPContainer readCachedContent]
-[PTPInitiator objectHandlesInStorage:objectFormatCode:association:]
-[PTPInitiator passthroughUsed]
-[PTPCameraStorage hasBeenRemoved]
-[PTPInitiator objectInfo:responseCode:]
__PTPGetJPEGThumbFromRAW
-[PTPInitiator deleteFile:]
-[PTPEventPacket initWithEventCode:transactionID:parameter1:]
-[PTPEventPacket contentForUSB]
+[PTPWrappedBytes wrappedBytesWithCapacity64:]
-[PTPInitiator pushEventData:forCookie:]
-[PTPEventPacket parameter1]
-[PTPInitiator itemForObjectHandle:]
-[PTPInitiator canonEnableTetheredCapture]
-[PTPInitiator canonSetRemoteMode:]
-[PTPInitiator canonSetEventMode:]
-[PTPInitiator canonGetEvents]
-[PTPInitiator canonSetDevicePropValueEx:length:]
-[PTPDataPacket initWithOperationCode:transactionID:andData:]
-[PTPInitiator sendRequest:andSendData:]
-[PTPHostUSBTransport sendRequest:sendData:timeout:]
-[PTPHostUSBTransport sendData:]
-[PTPDataPacket range]
-[PTPDataPacket setBytesTransferred:]
-[PTPHostUSBTransport sendDataPackets:]
-[PTPDataPacket transactionID]
-[PTPDataPacket copyToWrappedBytes:forTransport:]
-[PTPWrappedBytes capacity64]
-[PTPDataPacket copyToBuffer:numBytes:]
-[PTPInitiator sentData:]
-[PTPInitiator canonSetUILock:]
-[PTPInitiator canonSetHDDCapacity]
-[PTPInitiator canonHandleEvents:]
-[PTPInitiator transferObject:]
-[PTPObjectInfoDataset init]
-[PTPObjectInfoDataset setFilename:]
-[PTPObjectInfoDataset setObjectFormat:]
-[PTPObjectInfoDataset setObjectCompressedSize:]
-[PTPObjectInfoDataset setParentObject:]
-[PTPObjectInfoDataset setProtectionStatus:]
-[PTPObjectInfoDataset setThumbFormat:]
-[PTPObjectInfoDataset setThumbCompressedSize:]
-[PTPObjectInfoDataset setThumbPixWidth:]
-[PTPObjectInfoDataset setThumbPixHeight:]
-[PTPObjectInfoDataset setImagePixWidth:]
-[PTPObjectInfoDataset setImagePixHeight:]
-[PTPObjectInfoDataset setCaptureDate:]
-[PTPObjectInfoDataset setModificationDate:]
-[PTPInitiator canonSendTransferComplete:]
-[NSString(containsCategory) containsString:]
_PTPOpenTCPIPDevice
_GetLocationIDOfMatchingDevice
_PTPWriteFileData
___PTPDownloadProgressNotifier_block_invoke
-[PTPCancelPacket initWithTransactionID:]
-[PTPCancelPacket initWithTCPBuffer:]
-[PTPCancelPacket contentForTCP]
-[PTPCancelPacket description]
-[PTPCancelPacket transactionID]
-[PTPCancelPacket setTransactionID:]
-[PTPDataPacket filepath]
-[PTPDataPacket initWithOperationCode:transactionID:andFilepath:]
-[PTPDataPacket initWithTCPBuffer:]
-[PTPDataPacket initWithUSBBuffer:]
-[PTPDataPacket dealloc]
-[PTPDataPacket contentForTCP]
-[PTPDataPacket contentForUSB]
-[PTPDataPacket contentForUSBUsingBuffer:capacity:]
-[PTPDataPacket description]
-[PTPDataPacket operationCode]
-[PTPDataPacket setOperationCode:]
-[PTPDataPacket setTransactionID:]
-[PTPDataPacket data]
-[PTPDataPacket setData:]
-[PTPDataPacket bufferSize]
-[PTPDataPacket offsetInBuffer]
-[PTPDataPacket setRange:]
-[PTPDataPacket bytesTransferred]
-[PTPDataPacket copyDataToWrappedBytes:forTransport:fromOffset:]
-[PTPDataPacket copyHeaderToWrappedBytes:forTransport:]
-[PTPDataPacket copyFromBuffer:numBytes:]
-[PTPDeviceInfoDataset init]
-[PTPDeviceInfoDataset initWithData:]
-[PTPDeviceInfoDataset updateContent]
-[PTPDeviceInfoDataset content]
-[PTPDeviceInfoDataset setStandardVersion:]
-[PTPDeviceInfoDataset setVendorExtensionID:]
-[PTPDeviceInfoDataset setVendorExtensionVersion:]
-[PTPDeviceInfoDataset vendorExtensionDescription]
-[PTPDeviceInfoDataset setVendorExtensionDescription:]
-[PTPDeviceInfoDataset functionalMode]
-[PTPDeviceInfoDataset setFunctionalMode:]
-[PTPDeviceInfoDataset setOperationsSupported:]
-[PTPDeviceInfoDataset setEventsSupported:]
-[PTPDeviceInfoDataset setDevicePropertiesSupported:]
-[PTPDeviceInfoDataset captureFormats]
-[PTPDeviceInfoDataset setCaptureFormats:]
-[PTPDeviceInfoDataset imageFormats]
-[PTPDeviceInfoDataset setImageFormats:]
-[PTPDeviceInfoDataset manufacturer]
-[PTPDeviceInfoDataset setManufacturer:]
-[PTPDeviceInfoDataset setModel:]
-[PTPDeviceInfoDataset deviceVersion]
-[PTPDeviceInfoDataset setDeviceVersion:]
-[PTPDeviceInfoDataset serialNumber]
-[PTPDeviceInfoDataset setSerialNumber:]
-[PTPDeviceInfoDataset canonicalManufacturer]
-[PTPDevicePropDescDataset init]
-[PTPDevicePropDescDataset setContent:]
-[PTPDevicePropDescDataset initWithData:]
-[PTPDevicePropDescDataset initWithMutableData:]
-[PTPDevicePropDescDataset dealloc]
-[PTPDevicePropDescDataset updateContent]
-[PTPDevicePropDescDataset content]
-[PTPDevicePropDescDataset description]
-[PTPDevicePropDescDataset devicePropertyCode]
-[PTPDevicePropDescDataset setDevicePropertyCode:]
-[PTPDevicePropDescDataset dataTypeCode]
-[PTPDevicePropDescDataset setDataTypeCode:]
-[PTPDevicePropDescDataset readWriteAttribute]
-[PTPDevicePropDescDataset setReadWriteAttribute:]
-[PTPDevicePropDescDataset factoryDefaultValue]
-[PTPDevicePropDescDataset setFactoryDefaultValue:]
-[PTPDevicePropDescDataset currentValue]
-[PTPDevicePropDescDataset setCurrentValue:]
-[PTPDevicePropDescDataset formFlag]
-[PTPDevicePropDescDataset setFormFlag:]
-[PTPDevicePropDescDataset minimumValue]
-[PTPDevicePropDescDataset setMinimumValue:]
-[PTPDevicePropDescDataset maximumValue]
-[PTPDevicePropDescDataset setMaximumValue:]
-[PTPDevicePropDescDataset stepSize]
-[PTPDevicePropDescDataset setStepSize:]
-[PTPDevicePropDescDataset numberOfValues]
-[PTPDevicePropDescDataset setNumberOfValues:]
-[PTPDevicePropDescDataset supportedValues]
-[PTPDevicePropDescDataset setSupportedValues:]
-[PTPEndDataPacket initWithOperationCode:transactionID:andData:]
-[PTPEndDataPacket initWithTCPBuffer:]
-[PTPEndDataPacket initWithUSBBuffer:]
-[PTPEndDataPacket dealloc]
-[PTPEndDataPacket contentForTCP]
-[PTPEndDataPacket contentForUSB]
-[PTPEndDataPacket contentForUSBUsingBuffer:capacity:]
-[PTPEndDataPacket description]
-[PTPEndDataPacket operationCode]
-[PTPEndDataPacket setOperationCode:]
-[PTPEndDataPacket transactionID]
-[PTPEndDataPacket setTransactionID:]
-[PTPEndDataPacket data]
-[PTPEndDataPacket setData:]
-[PTPEventPacket initWithEventCode:transactionID:]
-[PTPEventPacket initWithEventCode:transactionID:parameter1:parameter2:]
-[PTPEventPacket initWithEventCode:transactionID:parameter1:parameter2:parameter3:]
-[PTPEventPacket initWithTCPBuffer:]
-[PTPEventPacket contentForTCP]
-[PTPEventPacket contentForUSBUsingBuffer:capacity:]
-[PTPEventPacket setEventCode:]
-[PTPEventPacket transactionID]
-[PTPEventPacket setTransactionID:]
-[PTPEventPacket setParameter1:]
-[PTPEventPacket parameter2]
-[PTPEventPacket setParameter2:]
-[PTPEventPacket parameter3]
-[PTPEventPacket setParameter3:]
-[PTPInitCommandACKPacket initWithConnectionNumber:responderGUID:responderFriendlyName:]
-[PTPInitCommandACKPacket initWithTCPBuffer:]
-[PTPInitCommandACKPacket dealloc]
-[PTPInitCommandACKPacket contentForTCP]
-[PTPInitCommandACKPacket description]
-[PTPInitCommandACKPacket connectionNumber]
-[PTPInitCommandACKPacket setConnectionNumber:]
-[PTPInitCommandACKPacket responderGUID]
-[PTPInitCommandACKPacket responderGUIDString]
-[PTPInitCommandACKPacket setResponderGUID:]
-[PTPInitCommandACKPacket responderFriendlyName]
-[PTPInitCommandACKPacket setResponderFriendlyName:]
+[PTPDevicePropertyReader sharedReader]
___39+[PTPDevicePropertyReader sharedReader]_block_invoke
-[PTPDevicePropertyReader init]
___31-[PTPDevicePropertyReader init]_block_invoke
-[PTPDevicePropertyReader dealloc]
-[PTPDevicePropertyReader propertiesOfDeviceWithUDID:]
-[PTPDevicePropertyReader pairDeviceWithUDID:]
-[PTPDevicePropertyReader unpairDeviceWithUDID:]
-[PTPDevicePropertyReader connection]
-[PTPDevicePropertyReader setConnection:]
-[PTPInitCommandRequestPacket initWithInitiatorGUID:initiatorFriendlyName:]
-[PTPInitCommandRequestPacket initWithTCPBuffer:]
-[PTPInitCommandRequestPacket dealloc]
-[PTPInitCommandRequestPacket contentForTCP]
-[PTPInitCommandRequestPacket description]
-[PTPInitCommandRequestPacket initiatorGUID]
-[PTPInitCommandRequestPacket setInitiatorGUID:]
-[PTPInitCommandRequestPacket initiatorFriendlyName]
-[PTPInitCommandRequestPacket setInitiatorFriendlyName:]
-[PTPInitEventACKPacket initWithTCPBuffer:]
-[PTPInitEventACKPacket contentForTCP]
-[PTPInitEventACKPacket description]
-[PTPInitEventRequestPacket initWithConnectionNumber:]
-[PTPInitEventRequestPacket initWithTCPBuffer:]
-[PTPInitEventRequestPacket contentForTCP]
-[PTPInitEventRequestPacket description]
-[PTPInitEventRequestPacket connectionNumber]
-[PTPInitEventRequestPacket setConnectionNumber:]
-[PTPInitFailPacket initWithReason:]
-[PTPInitFailPacket initWithTCPBuffer:]
-[PTPInitFailPacket contentForTCP]
-[PTPInitFailPacket description]
-[PTPInitFailPacket reason]
-[PTPInitFailPacket setReason:]
-[PTPObjectInfoDataset initWithData:]
-[PTPObjectInfoDataset initWithData64:]
-[PTPObjectInfoDataset content]
-[PTPObjectInfoDataset content64]
-[PTPObjectInfoDataset description]
-[PTPObjectInfoDataset storageID]
-[PTPObjectInfoDataset setStorageID:]
-[PTPObjectInfoDataset thmFileSize]
-[PTPObjectInfoDataset setThmFileSize:]
-[PTPObjectInfoDataset thumbOffset]
-[PTPObjectInfoDataset setThumbOffset:]
-[PTPObjectInfoDataset thumbPixWidth]
-[PTPObjectInfoDataset thumbPixHeight]
-[PTPObjectInfoDataset imageBitDepth]
-[PTPObjectInfoDataset setImageBitDepth:]
-[PTPObjectInfoDataset setAssociationType:]
-[PTPObjectInfoDataset associationDesc]
-[PTPObjectInfoDataset setAssociationDesc:]
-[PTPObjectInfoDataset sequenceNumber]
-[PTPObjectInfoDataset setSequenceNumber:]
-[PTPObjectInfoDataset setKeywords:]
-[PTPOperationRequestPacket initWithOperationCode:transactionID:dataPhaseInfo:numParameters:parameters:]
-[PTPOperationRequestPacket initWithOperationCode:transactionID:dataPhaseInfo:parameter1:parameter2:]
-[PTPOperationRequestPacket initWithOperationCode:transactionID:dataPhaseInfo:parameter1:parameter2:parameter3:parameter4:]
-[PTPOperationRequestPacket initWithOperationCode:transactionID:dataPhaseInfo:parameter1:parameter2:parameter3:parameter4:parameter5:]
-[PTPOperationRequestPacket initWithTCPBuffer:]
-[PTPOperationRequestPacket initWithUSBBuffer:]
-[PTPOperationRequestPacket contentForTCP]
-[PTPOperationRequestPacket contentForUSB]
-[PTPOperationRequestPacket setOperationCode:]
-[PTPOperationRequestPacket transactionID]
-[PTPOperationRequestPacket setTransactionID:]
-[PTPOperationRequestPacket dataPhaseInfo]
-[PTPOperationRequestPacket setDataPhaseInfo:]
-[PTPOperationRequestPacket numParameters]
-[PTPOperationRequestPacket parameterAtIndex:]
-[PTPOperationRequestPacket setPparameter:atIndex:]
-[PTPOperationRequestPacket parameter1]
-[PTPOperationRequestPacket setParameter1:]
-[PTPOperationRequestPacket parameter2]
-[PTPOperationRequestPacket setParameter2:]
-[PTPOperationRequestPacket parameter3]
-[PTPOperationRequestPacket setParameter3:]
-[PTPOperationRequestPacket parameter4]
-[PTPOperationRequestPacket setParameter4:]
-[PTPOperationRequestPacket parameter5]
-[PTPOperationRequestPacket setParameter5:]
-[PTPOperationResponsePacket initWithResponseCode:transactionID:numParameters:parameters:]
-[PTPOperationResponsePacket initWithResponseCode:transactionID:]
-[PTPOperationResponsePacket initWithResponseCode:transactionID:parameter1:]
-[PTPOperationResponsePacket initWithResponseCode:transactionID:parameter1:parameter2:]
-[PTPOperationResponsePacket initWithResponseCode:transactionID:parameter1:parameter2:parameter3:]
-[PTPOperationResponsePacket initWithResponseCode:transactionID:parameter1:parameter2:parameter3:parameter4:]
-[PTPOperationResponsePacket initWithResponseCode:transactionID:parameter1:parameter2:parameter3:parameter4:parameter5:]
-[PTPOperationResponsePacket copyWithZone:]
-[PTPOperationResponsePacket initWithTCPBuffer:]
-[PTPOperationResponsePacket contentForTCP]
-[PTPOperationResponsePacket contentForUSB]
-[PTPOperationResponsePacket contentForUSBUsingBuffer:capacity:]
-[PTPOperationResponsePacket setResponseCode:]
-[PTPOperationResponsePacket transactionID]
-[PTPOperationResponsePacket setTransactionID:]
-[PTPOperationResponsePacket setNumParameters:]
-[PTPOperationResponsePacket parameterAtIndex:]
-[PTPOperationResponsePacket setPparameter:atIndex:]
-[PTPOperationResponsePacket setParameter1:]
-[PTPOperationResponsePacket setParameter2:]
-[PTPOperationResponsePacket setParameter3:]
-[PTPOperationResponsePacket setParameter4:]
-[PTPOperationResponsePacket setParameter5:]
-[PTPProbeRequestPacket initWithTCPBuffer:]
-[PTPProbeRequestPacket contentForTCP]
-[PTPProbeRequestPacket description]
-[PTPProbeResponsePacket initWithTCPBuffer:]
-[PTPProbeResponsePacket contentForTCP]
-[PTPProbeResponsePacket description]
-[PTPStartDataPacket initWithTransactionID:totalDataSize:]
-[PTPStartDataPacket initWithTCPBuffer:]
-[PTPStartDataPacket contentForTCP]
-[PTPStartDataPacket description]
-[PTPStartDataPacket transactionID]
-[PTPStartDataPacket setTransactionID:]
-[PTPStartDataPacket totalDataSize]
-[PTPStartDataPacket setTotalDataSize:]
-[PTPStorageInfoDataset initWithData:]
-[PTPStorageInfoDataset updateContent]
-[PTPStorageInfoDataset content]
-[PTPStorageInfoDataset description]
-[PTPStorageInfoDataset storageType]
-[PTPStorageInfoDataset filesystemType]
-[PTPStorageInfoDataset maxCapacity]
-[PTPStorageInfoDataset freeSpaceInBytes]
-[PTPStorageInfoDataset freeSpaceInImages]
-[PTPStorageInfoDataset storageDescription]
-[PTPStorageInfoDataset volumeLabel]
_FWComputeCRC16
_crc32
_ReadSInt16
_ReadSInt16MaxSize
_WriteSInt16
_ReadUInt16MaxSize
_ReadSInt32
_ReadSInt32MaxSize
_WriteSInt32
_ReadUInt32MaxSize
_ReadSInt64
_ReadSInt64MaxSize
_WriteSInt64
_ReadUInt64MaxSize
_WriteUInt64
_CopyUnicodeStringWithLengthByteFromBufferMaxSize
_WriteUnicodeStringWithLengthByteToBuffer
_CopyUnicodeStringFromBuffer
_WriteUnicodeStringToBuffer
_CopyArrayOfUnsignedShortsFromBufferMaxSize
_WriteArrayOfUnsignedShortsToBuffer
_CopyArrayOfHandlesFromBufferMaxSize
_WriteArrayOfHandlesToBuffer
_GetIPPacketType
_GetUSBContainerType
_stringForFunctionalMode
_stringForStorageType
_stringForFilesystemType
_stringForAccessCapability
_stringForProtectionStatus
_stringForAssociationType
_stringForInitFailReason
_printerrno
-[PTPWrappedBytes init]
-[PTPWrappedBytes setCapacity64:]
-[PTPWrappedBytes wasInitWithFD]
-[PTPWrappedBytes appendData:]
-[PTPWrappedBytes excessDataLength]
-[PTPWrappedBytes description]
-[NSString(containsCategory) containsString:]
-[PTPCameraItem siblingWithSameName]
-[PTPCameraItem setParent:]
-[PTPCameraItem setStorageID:]
-[PTPCameraItem setObjHandle:]
-[PTPCameraItem setInitiator:]
-[PTPContainer refreshInfo]
-[PTPCameraStorage refreshInfo]
-[PTPCameraStorage tempArrayOfAllObjectHandlesToBeIgnored]
-[PTPCameraStorage incrementEstimatedNumOfDownloadableObjects:]
-[PTPCameraStorage numOfDownloadableObjectsPlusFolders]
-[PTPCameraStorage setHasBeenRemoved:]
-[PTPInitiator initWithTargetAddress:targetPort:targetGUID:targetName:hostGUID:hostName:]
-[PTPInitiator popEventDataForCookie:]
-[PTPInitiator appleDeviceHasNewFW]
-[PTPInitiator mobdevProps]
-[PTPInitiator cancel]
-[PTPInitiator transportConnectionStatus]
-[PTPInitiator handleAppleDeviceUnlockedEvent]
-[PTPInitiator notifyUserAssignedDeviceNameChange]
-[PTPInitiator resetDeviceConnection]
-[PTPInitiator handleStartData:]
-[PTPInitiator getVolumeThumbnail:size:]
-[PTPInitiator issueCancelEvent:]
-[PTPInitiator devicePropertyDescDatasetForProperty:]
-[PTPInitiator devicePropertyValueForProperty:]
-[PTPInitiator setDevicePropertyValue:forProperty:]
-[PTPInitiator resetDevicePropertyValueForProperty:]
-[PTPInitiator readStorages]
-[PTPInitiator numObjectsInStorage:objectFormatCode:association:]
-[PTPInitiator objectHandlesInStorage64:objectFormatCode:association:]
-[PTPInitiator objectInfosForObjectsInStorage:objectFormatCode:association:]
-[PTPInitiator objectInfo64BitSize:]
-[PTPInitiator objectFilesystemInfosForObjectsInStorage:objectFormatCode:association:]
-[PTPInitiator dataFromFile:maxSize:actualSize:useBuffer:]
-[PTPInitiator metadataFromFile:]
-[PTPInitiator initiateCapture]
-[PTPInitiator setDeviceDateTime:]
-[PTPInitiator handlePassThroughCommand_Legacy:]
-[PTPInitiator handlePassThroughCommand:]
-[PTPInitiator transportActivated]
-[PTPInitiator transportDeactivated]
-[PTPInitiator deviceStatus]
-[PTPInitiator deviceReset]
-[PTPInitiator allowKeepAwake]
-[PTPInitiator pairDevice]
-[PTPInitiator unpairDevice]
-[PTPInitiator canonDisableTetheredCapture]
-[PTPInitiator canonInitiateCapture]
-[PTPInitiator delegate]
-[PTPInitiator setDelegate:]
-[PTPInitiator UUIDString]
-[PTPInitiator persistentIDString]
-[PTPHostUSBTransport dealloc]
-[PTPHostUSBTransport setConnected:]
-[PTPHostUSBTransport description]
-[PTPHostUSBTransport sendCancel:]
-[PTPHostUSBTransport sendEvent:]
-[PTPHostUSBTransport cancelTransaction:]
-[PTPHostUSBTransport deviceStatus]
-[PTPHostUSBTransport deviceReset]
-[PTPHostUSBTransport dumpData:length:comment:]
-[PTPHostUSBTransport clearPipeStall:]
-[PTPHostUSBTransport clearBulkInPipeStall]
-[PTPHostUSBTransport waitForCallbackThreadConditionSignalWithTimeout:]
-[PTPTransport dealloc]
__dummyMachPortCallback
-[PTPTransport response]
-[PTPTransport connectionStatus]
-[PTPTransport startResponder]
-[PTPTransport role]
-[PTPTransport connected]
-[PTPTransport timedOut]
-[PTPTransport setTimedOut:]
-[PTPTransport sendRequest:receiveData:timeout:]
-[PTPTransport sendRequest:sendData:timeout:]
-[PTPTransport sendData:]
-[PTPTransport sendResponse:]
-[PTPTransport sendEvent:]
-[PTPTransport abortPendingIO]
-[PTPTransport cancelTransaction:]
-[PTPTransport deviceStatus]
-[PTPTransport deviceReset]
-[PTPTransport excessReceivedDataSize]
-[PTPTCPIPConnection initWithNativeSocket:transport:]
-[PTPTCPIPConnection initWithSocketToHost:port:transport:]
-[PTPTCPIPConnection dealloc]
-[PTPTCPIPConnection open]
__StaticReadStreamCallBack
__StaticWriteStreamCallBack
-[PTPTCPIPConnection close]
-[PTPTCPIPConnection writeData:]
-[PTPTCPIPConnection handleHasBytesAvailable]
-[PTPTCPIPConnection handleCanAcceptBytes]
-[PTPTCPIPConnection handleEndEncountered]
-[PTPTCPIPConnection handleErrorOccurred:]
-[PTPTCPIPConnection inactivityTimerCallBack:]
-[PTPTCPIPTransport initWithHostPort:hostName:hostGUID:bonjourServiceType:bonjourTXTRecords:delegate:]
-[PTPTCPIPTransport initForAcceptedSocketWithDelegate:andHostGUID:andHostName:]
-[PTPTCPIPTransport initWithTargetAddress:targetPort:targetGUID:targetName:hostGUID:hostName:delegate:]
-[PTPTCPIPTransport dealloc]
-[PTPTCPIPTransport targetName]
-[PTPTCPIPTransport targetAddress]
-[PTPTCPIPTransport targetPort]
-[PTPTCPIPTransport targetGUID]
-[PTPTCPIPTransport startResponder]
-[PTPTCPIPTransport waitForConnectionWithTimeout:]
-[PTPTCPIPTransport startInitiator]
-[PTPTCPIPTransport stop]
-[PTPTCPIPTransport connected]
-[PTPTCPIPTransport description]
-[PTPTCPIPTransport sendStartData:]
-[PTPTCPIPTransport sendCancel:]
-[PTPTCPIPTransport sendRequest:receiveData:timeout:]
-[PTPTCPIPTransport sendRequest:sendData:timeout:]
-[PTPTCPIPTransport sendDataPackets:]
-[PTPTCPIPTransport sendData:]
-[PTPTCPIPTransport sendResponse:]
-[PTPTCPIPTransport sendEvent:]
-[PTPTCPIPTransport cancelTransaction:]
-[PTPTCPIPTransport releaseConnections]
-[PTPTCPIPTransport acceptConnectionFromSocket:]
-[PTPTCPIPTransport didCloseConnection:withError:]
-[PTPTCPIPTransport handleData:from:]
-[PTPTCPIPTransport waitForCallbackThreadConditionSignalWithTimeout:]
-[PTPTCPIPTransport waitForCallbackThreadConditionSignalWithTimeoutForConnection:]
_crc32_tab
-[PTPHostUSBTransport deviceReset].req
__gPTPRequestResponseBufferSize
__gPTPHostDataBufferSize
__gPTPDeviceDataBufferSize
__gPTPEventBufferSize
__gPTPDefaultTimeOutInSeconds
GCC_except_table10
___block_descriptor_tmp
_PTPDevicePropertyClass
_PTPDevicePropertyProductType
_PTPDevicePropertyColor
_PTPDevicePropertyEnclosureColor
_PTPDevicePairedState
_PTPDeviceOSVersion
_PTPDeviceBuildVersion
___block_descriptor_tmp
___block_literal_global
___block_descriptor_tmp18
___block_literal_global19
_OBJC_IVAR_$_PTPCancelPacket._transactionID
_OBJC_IVAR_$_PTPDataPacket._filepath
_OBJC_IVAR_$_PTPDataPacket._operationCode
_OBJC_IVAR_$_PTPDataPacket._transactionID
_OBJC_IVAR_$_PTPDataPacket._data
_OBJC_IVAR_$_PTPDataPacket._bufferSize
_OBJC_IVAR_$_PTPDataPacket._offsetInBuffer
_OBJC_IVAR_$_PTPDataPacket._range
_OBJC_IVAR_$_PTPDataPacket._fd
_OBJC_IVAR_$_PTPDataPacket._bytesTransferred
_OBJC_IVAR_$_PTPDeviceInfoDataset._content
_OBJC_IVAR_$_PTPDeviceInfoDataset._dirty
_OBJC_IVAR_$_PTPDeviceInfoDataset._readOnlyObject
_OBJC_IVAR_$_PTPDeviceInfoDataset._standardVersion
_OBJC_IVAR_$_PTPDeviceInfoDataset._vendorExtensionID
_OBJC_IVAR_$_PTPDeviceInfoDataset._vendorExtensionVersion
_OBJC_IVAR_$_PTPDeviceInfoDataset._vendorExtensionDescription
_OBJC_IVAR_$_PTPDeviceInfoDataset._functionalMode
_OBJC_IVAR_$_PTPDeviceInfoDataset._operationsSupported
_OBJC_IVAR_$_PTPDeviceInfoDataset._eventsSupported
_OBJC_IVAR_$_PTPDeviceInfoDataset._devicePropertiesSupported
_OBJC_IVAR_$_PTPDeviceInfoDataset._captureFormats
_OBJC_IVAR_$_PTPDeviceInfoDataset._imageFormats
_OBJC_IVAR_$_PTPDeviceInfoDataset._manufacturer
_OBJC_IVAR_$_PTPDeviceInfoDataset._model
_OBJC_IVAR_$_PTPDeviceInfoDataset._deviceVersion
_OBJC_IVAR_$_PTPDeviceInfoDataset._serialNumber
_OBJC_IVAR_$_PTPDevicePropDescDataset._content
_OBJC_IVAR_$_PTPDevicePropDescDataset._dirty
_OBJC_IVAR_$_PTPDevicePropDescDataset._readOnlyObject
_OBJC_IVAR_$_PTPDevicePropDescDataset._devicePropertyCode
_OBJC_IVAR_$_PTPDevicePropDescDataset._dataTypeCode
_OBJC_IVAR_$_PTPDevicePropDescDataset._readWriteAttribute
_OBJC_IVAR_$_PTPDevicePropDescDataset._factoryDefaultValue
_OBJC_IVAR_$_PTPDevicePropDescDataset._currentValue
_OBJC_IVAR_$_PTPDevicePropDescDataset._formFlag
_OBJC_IVAR_$_PTPDevicePropDescDataset._minimumValue
_OBJC_IVAR_$_PTPDevicePropDescDataset._maximumValue
_OBJC_IVAR_$_PTPDevicePropDescDataset._stepSize
_OBJC_IVAR_$_PTPDevicePropDescDataset._numberOfValues
_OBJC_IVAR_$_PTPDevicePropDescDataset._supportedValues
_OBJC_IVAR_$_PTPEndDataPacket._operationCode
_OBJC_IVAR_$_PTPEndDataPacket._transactionID
_OBJC_IVAR_$_PTPEndDataPacket._data
_OBJC_IVAR_$_PTPEventPacket._eventCode
_OBJC_IVAR_$_PTPEventPacket._transactionID
_OBJC_IVAR_$_PTPEventPacket._numParameters
_OBJC_IVAR_$_PTPEventPacket._parameters
_OBJC_IVAR_$_PTPInitCommandACKPacket._connectionNumber
_OBJC_IVAR_$_PTPInitCommandACKPacket._responderGUID
_OBJC_IVAR_$_PTPInitCommandACKPacket._responderFriendlyName
_OBJC_IVAR_$_PTPDevicePropertyReader._connection
_OBJC_IVAR_$_PTPInitCommandRequestPacket._initiatorGUID
_OBJC_IVAR_$_PTPInitCommandRequestPacket._initiatorFriendlyName
_OBJC_IVAR_$_PTPInitEventRequestPacket._connectionNumber
_OBJC_IVAR_$_PTPInitFailPacket._reason
_OBJC_IVAR_$_PTPObjectInfoDataset._storageID
_OBJC_IVAR_$_PTPObjectInfoDataset._objectFormat
_OBJC_IVAR_$_PTPObjectInfoDataset._protectionStatus
_OBJC_IVAR_$_PTPObjectInfoDataset._objectCompressedSize
_OBJC_IVAR_$_PTPObjectInfoDataset._thumbFormat
_OBJC_IVAR_$_PTPObjectInfoDataset._thumbCompressedSize
_OBJC_IVAR_$_PTPObjectInfoDataset._thumbPixWidth
_OBJC_IVAR_$_PTPObjectInfoDataset._thumbPixHeight
_OBJC_IVAR_$_PTPObjectInfoDataset._imagePixWidth
_OBJC_IVAR_$_PTPObjectInfoDataset._imagePixHeight
_OBJC_IVAR_$_PTPObjectInfoDataset._imageBitDepth
_OBJC_IVAR_$_PTPObjectInfoDataset._parentObject
_OBJC_IVAR_$_PTPObjectInfoDataset._associationType
_OBJC_IVAR_$_PTPObjectInfoDataset._associationDesc
_OBJC_IVAR_$_PTPObjectInfoDataset._sequenceNumber
_OBJC_IVAR_$_PTPObjectInfoDataset._filename
_OBJC_IVAR_$_PTPObjectInfoDataset._captureDate
_OBJC_IVAR_$_PTPObjectInfoDataset._modificationDate
_OBJC_IVAR_$_PTPObjectInfoDataset._keywords
_OBJC_IVAR_$_PTPObjectInfoDataset._thmFileSize
_OBJC_IVAR_$_PTPObjectInfoDataset._thumbOffset
_OBJC_IVAR_$_PTPObjectInfoDataset._objectHandle
_OBJC_IVAR_$_PTPOperationRequestPacket._operationCode
_OBJC_IVAR_$_PTPOperationRequestPacket._transactionID
_OBJC_IVAR_$_PTPOperationRequestPacket._dataPhaseInfo
_OBJC_IVAR_$_PTPOperationRequestPacket._numParameters
_OBJC_IVAR_$_PTPOperationRequestPacket._parameters
_OBJC_IVAR_$_PTPOperationResponsePacket._responseCode
_OBJC_IVAR_$_PTPOperationResponsePacket._transactionID
_OBJC_IVAR_$_PTPOperationResponsePacket._numParameters
_OBJC_IVAR_$_PTPOperationResponsePacket._parameters
_OBJC_IVAR_$_PTPStartDataPacket._transactionID
_OBJC_IVAR_$_PTPStartDataPacket._totalDataSize
_OBJC_IVAR_$_PTPStorageInfoDataset._content
_OBJC_IVAR_$_PTPStorageInfoDataset._dirty
_OBJC_IVAR_$_PTPStorageInfoDataset._readOnlyObject
_OBJC_IVAR_$_PTPStorageInfoDataset._storageType
_OBJC_IVAR_$_PTPStorageInfoDataset._filesystemType
_OBJC_IVAR_$_PTPStorageInfoDataset._accessCapability
_OBJC_IVAR_$_PTPStorageInfoDataset._maxCapacity
_OBJC_IVAR_$_PTPStorageInfoDataset._freeSpaceInBytes
_OBJC_IVAR_$_PTPStorageInfoDataset._freeSpaceInImages
_OBJC_IVAR_$_PTPStorageInfoDataset._storageDescription
_OBJC_IVAR_$_PTPStorageInfoDataset._volumeLabel
_OBJC_IVAR_$_PTPWrappedBytes._bytes
_OBJC_IVAR_$_PTPWrappedBytes._offset
_OBJC_IVAR_$_PTPWrappedBytes._capacity
_OBJC_IVAR_$_PTPWrappedBytes._useByteBuffer
_OBJC_IVAR_$_PTPWrappedBytes._allocatedBytes
_OBJC_IVAR_$_PTPWrappedBytes._fd
_OBJC_IVAR_$_PTPWrappedBytes._progressNotifier
_OBJC_IVAR_$_PTPWrappedBytes._progressNotifierContext
_OBJC_IVAR_$_PTPWrappedBytes._progressNotificationTime
_OBJC_IVAR_$_PTPWrappedBytes._excessDataLength
_OBJC_IVAR_$_PTPWrappedBytes._lastNotifiedProgress
_OBJC_IVAR_$_PTPCameraItem._type
_OBJC_IVAR_$_PTPCameraItem._parent
_OBJC_IVAR_$_PTPCameraItem._storageID
_OBJC_IVAR_$_PTPCameraItem._objHandle
_OBJC_IVAR_$_PTPCameraItem._initiator
_OBJC_IVAR_$_PTPCameraItem._info
_OBJC_IVAR_$_PTPCameraItem._path
_OBJC_IVAR_$_PTPCameraItem._icaObjInfo
_OBJC_IVAR_$_PTPContainer._content
_OBJC_IVAR_$_PTPContainer._notifications
_OBJC_IVAR_$_PTPCameraStorage._tempArrayOfAllObjectHandles
_OBJC_IVAR_$_PTPCameraStorage._tempArrayOfAllObjectHandlesToBeIgnored
_OBJC_IVAR_$_PTPCameraStorage._estimatedNumOfDownloadableObjects
_OBJC_IVAR_$_PTPCameraStorage._numOfDownloadableObjects
_OBJC_IVAR_$_PTPCameraStorage._numOfDownloadableObjectsPlusFolders
_OBJC_IVAR_$_PTPCameraStorage._hasBeenRemoved
_OBJC_IVAR_$_PTPCameraStorage._catalogingDone
_OBJC_IVAR_$_PTPInitiator._transport
_OBJC_IVAR_$_PTPInitiator._transactionID
_OBJC_IVAR_$_PTPInitiator._storages
_OBJC_IVAR_$_PTPInitiator._eventQueue
_OBJC_IVAR_$_PTPInitiator._arrayOf64BitFileSizes
_OBJC_IVAR_$_PTPInitiator._mobdevProperties
_OBJC_IVAR_$_PTPInitiator._cacheFolderParentPath
_OBJC_IVAR_$_PTPInitiator._cacheFolderName
_OBJC_IVAR_$_PTPInitiator._eventDataCache
_OBJC_IVAR_$_PTPInitiator._eventDataCookieCache
_OBJC_IVAR_$_PTPInitiator._event
_OBJC_IVAR_$_PTPInitiator._deviceInfo
_OBJC_IVAR_$_PTPInitiator._filenamePrefix
_OBJC_IVAR_$_PTPInitiator._appleDeviceHasNewFW
_OBJC_IVAR_$_PTPInitiator._deviceIsPairedWithThisHost
_OBJC_IVAR_$_PTPInitiator._deviceIsPasscodeLocked
_OBJC_IVAR_$_PTPInitiator._deviceIsDummyPTPDevice
_OBJC_IVAR_$_PTPInitiator._ICADeviceObjectInfo
_OBJC_IVAR_$_PTPInitiator._requestPending
_OBJC_IVAR_$_PTPInitiator._deviceIsAtLeastOkemoBased
_OBJC_IVAR_$_PTPInitiator._sessionOpen
_OBJC_IVAR_$_PTPInitiator._passthroughUsed
_OBJC_IVAR_$_PTPInitiator._tetheredCaptureState
_OBJC_IVAR_$_PTPInitiator._cancelOp
_OBJC_IVAR_$_PTPInitiator._dataForTransaction
_OBJC_IVAR_$_PTPInitiator._excessReceivedDataSize
_OBJC_IVAR_$_PTPInitiator._operationCode
_OBJC_IVAR_$_PTPInitiator._needToReopenSession
_OBJC_IVAR_$_PTPInitiator._tetheredCaptureEnableCount
_OBJC_IVAR_$_PTPInitiator._lastGrouptID
_OBJC_IVAR_$_PTPInitiator._delegate
_OBJC_IVAR_$_PTPInitiator._catalogingDone
_OBJC_IVAR_$_PTPInitiator._deviceVendorID
_OBJC_IVAR_$_PTPInitiator._deviceProductID
_OBJC_IVAR_$_PTPInitiator._deviceSerialNumberString
_OBJC_IVAR_$_PTPInitiator._UUIDString
_OBJC_IVAR_$_PTPInitiator._persistentIDString
_OBJC_IVAR_$_PTPInitiator._userAssignedDeviceName
_OBJC_IVAR_$_PTPInitiator._lastAddedObject
_OBJC_IVAR_$_PTPHostUSBTransport._locationID
_OBJC_IVAR_$_PTPHostUSBTransport._eventData
_OBJC_IVAR_$_PTPHostUSBTransport._readBufferSize
_OBJC_IVAR_$_PTPHostUSBTransport._writeBufferSize
_OBJC_IVAR_$_PTPHostUSBTransport._eventDataBufferSize
_OBJC_IVAR_$_PTPHostUSBTransport._readBuffer
_OBJC_IVAR_$_PTPHostUSBTransport._writeBuffer
_OBJC_IVAR_$_PTPHostUSBTransport._eventDataBuffer
_OBJC_IVAR_$_PTPHostUSBTransport._vendorID
_OBJC_IVAR_$_PTPHostUSBTransport._productID
_OBJC_IVAR_$_PTPHostUSBTransport._usbSerialNumberString
_OBJC_IVAR_$_PTPHostUSBTransport._interfaceInterfaceRef
_OBJC_IVAR_$_PTPHostUSBTransport._bulkPipeIn
_OBJC_IVAR_$_PTPHostUSBTransport._maxPacketSizeBulkIn
_OBJC_IVAR_$_PTPHostUSBTransport._bulkPipeOut
_OBJC_IVAR_$_PTPHostUSBTransport._maxPacketSizeBulkOut
_OBJC_IVAR_$_PTPHostUSBTransport._interruptPipeIn
_OBJC_IVAR_$_PTPHostUSBTransport._maxPacketSizeInterruptIn
_OBJC_IVAR_$_PTPHostUSBTransport._CFRunLoopSource
_OBJC_IVAR_$_PTPHostUSBTransport._connected
_OBJC_IVAR_$_PTPTransport._type
_OBJC_IVAR_$_PTPTransport._role
_OBJC_IVAR_$_PTPTransport._delegate
_OBJC_IVAR_$_PTPTransport._timedOut
_OBJC_IVAR_$_PTPTransport._responseReceived
_OBJC_IVAR_$_PTPTransport._callbackThreadRunLoop
_OBJC_IVAR_$_PTPTransport._callbackThreadConditionSignaled
_OBJC_IVAR_$_PTPTransport._callbackDummyMachPortRLSrc
_OBJC_IVAR_$_PTPTransport._callbackThreadCondition
_OBJC_IVAR_$_PTPTransport._callbackThreadMutex
_OBJC_IVAR_$_PTPTransport._response
_OBJC_IVAR_$_PTPTransport._connectionStatus
_OBJC_IVAR_$_PTPTransport._callbackThread
_OBJC_IVAR_$_PTPTransport._excessReceivedDataSize
_OBJC_IVAR_$_PTPTransport._headerBuffer
_OBJC_IVAR_$_PTPTransport._headerBufferFound
_OBJC_IVAR_$_PTPTransport._delegateNeedsResponse
_OBJC_IVAR_$_PTPTransport._busy
_OBJC_IVAR_$_PTPTransport._canceledTransactionID
_OBJC_IVAR_$_PTPTransport._dataForTransaction
_OBJC_IVAR_$_PTPTCPIPConnection._inStream
_OBJC_IVAR_$_PTPTCPIPConnection._outStream
_OBJC_IVAR_$_PTPTCPIPConnection._recieveBuffer
_OBJC_IVAR_$_PTPTCPIPConnection._bytesReceived
_OBJC_IVAR_$_PTPTCPIPConnection._transmitBuffer
_OBJC_IVAR_$_PTPTCPIPConnection._bytesSent
_OBJC_IVAR_$_PTPTCPIPConnection._transmitBufferSemaphore
_OBJC_IVAR_$_PTPTCPIPConnection._receiveBufferSemaphore
_OBJC_IVAR_$_PTPTCPIPConnection._transport
_OBJC_IVAR_$_PTPTCPIPConnection._receiveTimer
_OBJC_IVAR_$_PTPTCPIPConnection._inactivityTimer
_OBJC_IVAR_$_PTPTCPIPConnection._transmitTimer
_OBJC_IVAR_$_PTPTCPIPTransport._hostPort
_OBJC_IVAR_$_PTPTCPIPTransport._hostName
_OBJC_IVAR_$_PTPTCPIPTransport._hostGUID
_OBJC_IVAR_$_PTPTCPIPTransport._cdData
_OBJC_IVAR_$_PTPTCPIPTransport._eventData
_OBJC_IVAR_$_PTPTCPIPTransport._tempData
_OBJC_IVAR_$_PTPTCPIPTransport._targetAddress
_OBJC_IVAR_$_PTPTCPIPTransport._targetPort
_OBJC_IVAR_$_PTPTCPIPTransport._targetGUID
_OBJC_IVAR_$_PTPTCPIPTransport._targetName
_OBJC_IVAR_$_PTPTCPIPTransport._tempConnection
_OBJC_IVAR_$_PTPTCPIPTransport._cdConnection
_OBJC_IVAR_$_PTPTCPIPTransport._eventConnection
_OBJC_IVAR_$_PTPTCPIPTransport._connectionRequestResponse
_OBJC_IVAR_$_PTPTCPIPTransport._connectionNumber
_OBJC_IVAR_$_PTPTCPIPTransport._delegateNeedsData
_OBJC_IVAR_$_PTPTCPIPTransport._socket
_OBJC_CLASS_$_PTPCancelPacket
_OBJC_METACLASS_$_PTPCancelPacket
_OBJC_CLASS_$_PTPDataPacket
_OBJC_METACLASS_$_PTPDataPacket
_OBJC_CLASS_$_PTPDeviceInfoDataset
_OBJC_METACLASS_$_PTPDeviceInfoDataset
_OBJC_CLASS_$_PTPDevicePropDescDataset
_OBJC_METACLASS_$_PTPDevicePropDescDataset
_OBJC_CLASS_$_PTPEndDataPacket
_OBJC_METACLASS_$_PTPEndDataPacket
_OBJC_CLASS_$_PTPEventPacket
_OBJC_METACLASS_$_PTPEventPacket
_OBJC_CLASS_$_PTPInitCommandACKPacket
_OBJC_METACLASS_$_PTPInitCommandACKPacket
_OBJC_CLASS_$_PTPDevicePropertyReader
_OBJC_METACLASS_$_PTPDevicePropertyReader
_OBJC_CLASS_$_PTPInitCommandRequestPacket
_OBJC_METACLASS_$_PTPInitCommandRequestPacket
_OBJC_CLASS_$_PTPInitEventACKPacket
_OBJC_METACLASS_$_PTPInitEventACKPacket
_OBJC_CLASS_$_PTPInitEventRequestPacket
_OBJC_METACLASS_$_PTPInitEventRequestPacket
_OBJC_CLASS_$_PTPInitFailPacket
_OBJC_METACLASS_$_PTPInitFailPacket
_OBJC_CLASS_$_PTPObjectInfoDataset
_OBJC_METACLASS_$_PTPObjectInfoDataset
_OBJC_CLASS_$_PTPOperationRequestPacket
_OBJC_METACLASS_$_PTPOperationRequestPacket
_OBJC_CLASS_$_PTPOperationResponsePacket
_OBJC_METACLASS_$_PTPOperationResponsePacket
_OBJC_CLASS_$_PTPProbeRequestPacket
_OBJC_METACLASS_$_PTPProbeRequestPacket
_OBJC_CLASS_$_PTPProbeResponsePacket
_OBJC_METACLASS_$_PTPProbeResponsePacket
_OBJC_CLASS_$_PTPStartDataPacket
_OBJC_METACLASS_$_PTPStartDataPacket
_OBJC_CLASS_$_PTPStorageInfoDataset
_OBJC_METACLASS_$_PTPStorageInfoDataset
_OBJC_CLASS_$_PTPWrappedBytes
_OBJC_METACLASS_$_PTPWrappedBytes
_OBJC_CLASS_$_PTPCameraItem
_OBJC_METACLASS_$_PTPCameraItem
_OBJC_CLASS_$_PTPCameraFile
_OBJC_METACLASS_$_PTPCameraFile
_OBJC_CLASS_$_PTPContainer
_OBJC_CLASS_$_PTPCameraFolder
_OBJC_METACLASS_$_PTPContainer
_OBJC_METACLASS_$_PTPCameraFolder
_OBJC_CLASS_$_PTPCameraStorage
_OBJC_METACLASS_$_PTPCameraStorage
_OBJC_CLASS_$_PTPInitiator
_OBJC_METACLASS_$_PTPInitiator
_OBJC_CLASS_$_PTPHostUSBTransport
_OBJC_METACLASS_$_PTPHostUSBTransport
_OBJC_CLASS_$_PTPTransport
_OBJC_METACLASS_$_PTPTransport
_OBJC_CLASS_$_PTPTCPIPConnection
_OBJC_METACLASS_$_PTPTCPIPConnection
_OBJC_CLASS_$_PTPTCPIPTransport
_OBJC_METACLASS_$_PTPTCPIPTransport
__sDeviceIcons
__sKnwonMovieExtensions
__sKnownRawExtensions
+[PTPDevicePropertyReader sharedReader].createsPTPDevicePropertyReader
_sPTPDevicePropertyReader
_gInitiators
__mh_execute_header
_CFAbsoluteTimeGetCurrent
_CFDataCreateMutable
_CFDataDeleteBytes
_CFDataGetLength
_CFMachPortCreate
_CFMachPortCreateRunLoopSource
_CFReadStreamClose
_CFReadStreamGetError
_CFReadStreamHasBytesAvailable
_CFReadStreamOpen
_CFReadStreamRead
_CFReadStreamScheduleWithRunLoop
_CFReadStreamSetClient
_CFReadStreamSetProperty
_CFReadStreamUnscheduleFromRunLoop
_CFRelease
_CFRunLoopAddSource
_CFRunLoopGetCurrent
_CFRunLoopRemoveSource
_CFRunLoopRun
_CFRunLoopWakeUp
_CFStreamCreatePairWithSocket
_CFStreamCreatePairWithSocketToHost
_CFStringConvertEncodingToNSStringEncoding
_CFURLCreateFromFileSystemRepresentation
_CFURLCreateWithFileSystemPath
_CFUUIDCreate
_CFUUIDCreateFromString
_CFUUIDCreateString
_CFUUIDCreateWithBytes
_CFUUIDGetConstantUUIDWithBytes
_CFUUIDGetUUIDBytes
_CFWriteStreamCanAcceptBytes
_CFWriteStreamClose
_CFWriteStreamGetError
_CFWriteStreamOpen
_CFWriteStreamScheduleWithRunLoop
_CFWriteStreamSetClient
_CFWriteStreamUnscheduleFromRunLoop
_CFWriteStreamWrite
_CGImageDestinationAddImage
_CGImageDestinationCreateWithData
_CGImageDestinationFinalize
_CGImageGetHeight
_CGImageSourceCopyPropertiesAtIndex
_CGImageSourceCopyTypeExtensions
_CGImageSourceCreateImageAtIndex
_CGImageSourceCreateThumbnailAtIndex
_CGImageSourceCreateWithURL
_CGImageSourceGetCount
_ICASetSInt32ValueInDict
_ICDConnectUSBDevice
_ICDCopyTemporaryDirectoryPath
_ICDCreateEventDataCookie
_ICDCreateGPSDictionaryFromString
_ICDDeleteCacheFolder
_ICDDeviceHasClients
_ICDNewObjectInfoCreated
_ICDSendNotification
_ICDSendNotificationAndWaitForReply
_ICD_main
_ICLoggingEnabled
_ICLoggingLevelMask
_ICLoggingLevelVerboseInfo
_IOCreatePlugInInterfaceForService
_IODestroyPlugInInterface
_IOIteratorNext
_IOObjectRelease
_IORegistryEntryCreateCFProperties
_IORegistryEntryGetParentEntry
_IOServiceGetMatchingServices
_IOServiceMatching
_NSApp
_NSLog
_OBJC_CLASS_$_NSArray
_OBJC_CLASS_$_NSAutoreleasePool
_OBJC_CLASS_$_NSBundle
_OBJC_CLASS_$_NSCharacterSet
_OBJC_CLASS_$_NSData
_OBJC_CLASS_$_NSDate
_OBJC_CLASS_$_NSDateFormatter
_OBJC_CLASS_$_NSDictionary
_OBJC_CLASS_$_NSEvent
_OBJC_CLASS_$_NSFileManager
_OBJC_CLASS_$_NSGraphicsContext
_OBJC_CLASS_$_NSKeyedUnarchiver
_OBJC_CLASS_$_NSMutableArray
_OBJC_CLASS_$_NSMutableData
_OBJC_CLASS_$_NSMutableDictionary
_OBJC_CLASS_$_NSMutableSet
_OBJC_CLASS_$_NSMutableString
_OBJC_CLASS_$_NSNumber
_OBJC_CLASS_$_NSObject
_OBJC_CLASS_$_NSProcessInfo
_OBJC_CLASS_$_NSPropertyListSerialization
_OBJC_CLASS_$_NSString
_OBJC_CLASS_$_NSThread
_OBJC_CLASS_$_NSUserDefaults
_OBJC_EHTYPE_$_NSException
_OBJC_METACLASS_$_NSObject
_OSAtomicAdd32Barrier
_SendDeviceResetNotification
_UTTypeConformsTo
_UTTypeCreatePreferredIdentifierForTag
__NSConcreteGlobalBlock
__NSConcreteStackBlock
__Unwind_Resume
___CFConstantStringClassReference
___ICLog
___bzero
___error
___objc_personality_v0
___snprintf_chk
___stack_chk_fail
___stack_chk_guard
___stderrp
___strcat_chk
___strcpy_chk
___strlcpy_chk
___strncat_chk
__objc_empty_cache
__xpc_type_dictionary
__xpc_type_error
_chdir
_close
_closedir
_dispatch_async
_dispatch_get_global_queue
_dispatch_once
_dispatch_queue_create
_dispatch_release
_dispatch_semaphore_create
_dispatch_semaphore_signal
_dispatch_semaphore_wait
_exit
_fprintf
_free
_gDeviceUpdatesDeviceDatabase
_gFilenamePrefix
_gICDCallbackFunctions
_gNextFilenameCount
_gTimerCalledCount
_getcwd
_kCFAllocatorDefault
_kCFBooleanTrue
_kCFRunLoopDefaultMode
_kCFStreamPropertyShouldCloseNativeSocket
_kCGImagePropertyExifDateTimeDigitized
_kCGImagePropertyExifDateTimeOriginal
_kCGImagePropertyExifDictionary
_kCGImagePropertyPixelHeight
_kCGImagePropertyPixelWidth
_kCGImagePropertyTIFFDateTime
_kCGImagePropertyTIFFDictionary
_kCGImageSourceCreateThumbnailFromImageIfAbsent
_kCGImageSourceCreateThumbnailFromImageProxy
_kCGImageSourceThumbnailMaxPixelSize
_kICABonjourTXTRecordKey
_kICADeviceIconPathKey
_kICAIPAddressKey
_kICAIPGUIDKey
_kICAIPPortKey
_kICAInstancesKey
_kICAModelNameKey
_kICANotificationClassKey
_kICANotificationClassPTPStandard
_kICANotificationClassPTPVendor
_kICANotificationClassProprietary
_kICANotificationDataCookieKey
_kICANotificationDataKey
_kICANotificationDataSizeKey
_kICANotificationDeviceInfoDictionaryKey
_kICANotificationICAObjectArrayKey
_kICANotificationICAObjectKey
_kICANotificationPercentDownloadedKey
_kICANotificationRawEventKey
_kICANotificationSubTypeKey
_kICANotificationTypeDeviceConnectionFailed
_kICANotificationTypeDeviceConnectionProgress
_kICANotificationTypeDeviceInfoChanged
_kICANotificationTypeDevicePairingFailed
_kICANotificationTypeDevicePropertyChanged
_kICANotificationTypeDownloadProgressStatus
_kICANotificationTypeKey
_kICANotificationTypeObjectAdded
_kICANotificationTypeObjectRemoved
_kICANotificationTypeProprietary
_kICANotificationTypeStoreAdded
_kICANotificationTypeStoreRemoved
_kICAUserAssignedDeviceNameKey
_kIOMasterPortDefault
_kUTTagClassFilenameExtension
_kUTTypeAudio
_kUTTypeJPEG
_kUTTypeMovie
_lseek
_lstat$INODE64
_malloc
_memcpy
_mkdir
_objc_begin_catch
_objc_end_catch
_objc_enumerationMutation
_objc_getProperty
_objc_msgSend
_objc_msgSendSuper2
_objc_setProperty_atomic
_objc_setProperty_atomic_copy
_open
_opendir$INODE64
_pread
_pthread_cond_destroy
_pthread_cond_init
_pthread_cond_signal
_pthread_cond_timedwait
_pthread_cond_wait
_pthread_create
_pthread_join
_pthread_mutex_destroy
_pthread_mutex_init
_pthread_mutex_lock
_pthread_mutex_unlock
_pthread_self
_pwrite
_read
_readdir$INODE64
_realloc
_statfs$INODE64
_strcmp
_strerror
_strlen
_strncmp
_strncpy
_syslog
_time
_unlink
_usleep
_write
_xpc_connection_create
_xpc_connection_get_name
_xpc_connection_resume
_xpc_connection_send_message_with_reply_sync
_xpc_connection_set_event_handler
_xpc_dictionary_create
_xpc_dictionary_get_bool
_xpc_dictionary_get_data
_xpc_dictionary_get_int64
_xpc_dictionary_set_string
_xpc_get_type
_xpc_release
dyld_stub_binder
