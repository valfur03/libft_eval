# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Dockerfile                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vfurmane <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/29 14:37:36 by vfurmane          #+#    #+#              #
#    Updated: 2020/10/29 14:37:38 by vfurmane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FROM debian:buster-slim

RUN set -eux; \
		apt-get update; \
		apt-get install -y gcc make libbsd-dev;

WORKDIR /mnt/libft

COPY libft.a .
COPY libft_eval/ libft_eval/
WORKDIR /mnt/libft/libft_eval
RUN ["./generate.sh"]

ENTRYPOINT ["./run_tests.sh"]
