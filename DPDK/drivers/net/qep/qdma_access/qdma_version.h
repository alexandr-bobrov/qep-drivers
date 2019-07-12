/*
 * Copyright(c) 2019 Xilinx, Inc. All rights reserved.
 *
 * BSD LICENSE
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *   * Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *   * Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in
 *     the documentation and/or other materials provided with the
 *     distribution.
 *   * Neither the name of the copyright holder nor the names of its
 *     contributors may be used to endorse or promote products derived
 *     from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef QDMA_VERSION_H_
#define QDMA_VERSION_H_


#define QDMA_VERSION_MAJOR	2019
#define QDMA_VERSION_MINOR	1
#define QDMA_VERSION_PATCH	23

#define QDMA_VERSION_STR	\
	__stringify(QDMA_VERSION_MAJOR) "." \
	__stringify(QDMA_VERSION_MINOR) "." \
	__stringify(QDMA_VERSION_PATCH)

#define QDMA_VERSION  \
	((QDMA_VERSION_MAJOR)*1000 + \
	 (QDMA_VERSION_MINOR)*100 + \
	  QDMA_VERSION_PATCH)


#endif /* COMMON_QDMA_VERSION_H_ */
