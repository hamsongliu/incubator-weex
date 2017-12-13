/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 * 
 *   http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

#import "WXModuleProtocol.h"

#define BIZTYPE             @"bizType"
#define PAGENAME            @"pageName"
#define WXSDKVERSION        @"WXSDKVersion"
#define JSLIBVERSION        @"JSLibVersion"
#define JSLIBSIZE           @"JSLibSize"
#define WXREQUESTTYPE       @"requestType"
#define WXCONNECTIONTYPE    @"connectionType"
#define WXCUSTOMMONITORINFO @"customMonitorInfo"

#define SDKINITTIME         @"SDKInitTime"
#define SDKINITINVOKETIME   @"SDKInitInvokeTime"
#define JSLIBINITTIME       @"JSLibInitTime"
#define JSTEMPLATESIZE      @"JSTemplateSize"
#define NETWORKTIME         @"networkTime"
#define COMMUNICATETIME     @"communicateTime"
#define SCREENRENDERTIME    @"screenRenderTime"
#define TOTALTIME           @"totalTime"
#define FIRSETSCREENJSFEXECUTETIME  @"firstScreenJSFExecuteTime"
#define COMPONENTCOUNT      @"componentCount"

#define CALLCREATEINSTANCETIME  @"callCreateInstanceTime"
#define COMMUNICATETOTALTIME    @"communicateTotalTime"
#define FSRENDERTIME    @"fsRenderTime"

#define CACHEPROCESSTIME    @"cacheProcessTime"
#define CACHERATIO          @"cacheRatio"

@protocol WXAppMonitorProtocol <WXModuleProtocol>

- (void)commitAppMonitorArgs:(NSDictionary *)args;

- (void)commitAppMonitorAlarm:(NSString *)pageName monitorPoint:(NSString *)monitorPoint success:(BOOL)success errorCode:(NSString *)errorCode errorMsg:(NSString *)errorMsg arg:(NSString *)arg;

@end
